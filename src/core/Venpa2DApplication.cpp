/*
 * Venpa2DApplication.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#include "Venpa2DApplication.h"


using namespace Venpa2D::Core;

Venpa2DApplication::Venpa2DApplication() {
	window = NULL;
	mainGLContext = NULL;
	doneWithGame = false;

}

Venpa2DApplication::~Venpa2DApplication() {
	// TODO Auto-generated destructor stub
}

void Venpa2DApplication::initialize(ApplicationConfig& config,ApplicationListener& game) {

	intializeSDL(config);
	startGameLoop(game);
}


void Venpa2DApplication::exit() {
					doneWithGame = true;
			        SDL_DestroyWindow(window);
			        SDL_GL_DeleteContext(mainGLContext);
			        SDL_Quit();
}

void Venpa2DApplication::startGameLoop(ApplicationListener& game) {

	SDL_Event event;
	doneWithGame = false;
	game.init();
	while(!doneWithGame) {
			game.update();

			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glLoadIdentity();
			game.render();

			SDL_GL_SwapWindow(window);


		    SDL_PollEvent(&event);
		    if(event.type == SDL_QUIT) {
		    	exit();
		    }
	game.dispose();
	}
}
void Venpa2DApplication::intializeSDL(ApplicationConfig &config) {
	int error;
		Uint32 flags = SDL_WINDOW_SHOWN|SDL_WINDOW_OPENGL;

		    error = SDL_Init(SDL_INIT_EVERYTHING);
		    // Turn on double buffering.
		    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);


		    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

		    // Create the window
		    window = SDL_CreateWindow(config.getTitle(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		    							config.getScreenWidth(),config.getScreenHeight(), flags);

		    mainGLContext = SDL_GL_CreateContext(window);

		    glShadeModel( GL_SMOOTH );

		    			    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

		    			    glViewport(0, 0,config.getScreenWidth(),config.getScreenHeight());

		    			    glMatrixMode(GL_PROJECTION);
		    			    glLoadIdentity();

		    			    glOrtho(0,config.getScreenWidth(),config.getScreenHeight(), 0, 1, -1);

		    			    glMatrixMode(GL_MODELVIEW);
		    				glEnable(GL_TEXTURE_2D);
		    				glClearDepth( 1.0f );
		    				glEnable( GL_DEPTH_TEST );
		    				glDepthFunc( GL_LEQUAL );
		    				glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );
		    				glLoadIdentity();

		    				glEnable(GL_CULL_FACE);

}
