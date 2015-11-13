#pragma once
/*
 * Venpa2DApplication.h
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#ifndef CORE_VENPA2DAPPLICATION_H_
#define CORE_VENPA2DAPPLICATION_H_
#include <GL/glew.h>
#include "ApplicationConfig.h"
#include "SDL.h"
#include "ApplicationListener.h"
#include "SDL_opengl.h"
#include <SDL_image.h>



namespace Venpa2D {

namespace Core {

	class Venpa2DApplication {


public:
	Venpa2DApplication();
	virtual ~Venpa2DApplication();
	void initialize(ApplicationConfig& config,ApplicationListener& game);
	void exit();

protected:
       SDL_Window* window;
       SDL_GLContext mainGLContext;
      // SDL_TimerID timer;
       bool doneWithGame;
       void intializeSDL(ApplicationConfig& config);
       void startGameLoop(ApplicationListener& game);

};

#endif /* CORE_VENPA2DAPPLICATION_H_ */

}
}
