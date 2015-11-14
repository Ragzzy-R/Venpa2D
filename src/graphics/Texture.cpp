/*
 * Texture.cpp
 *
 *  Created on: Nov 8, 2015
 *      Author: raghuram
 */

#include "Texture.h"
#include <stdio.h>
namespace Venpa2D {

namespace Graphics {

Texture::Texture(const char* filename) {
	SDL_Surface* TextureImage;

		if ((TextureImage = IMG_Load(filename)))  {
			int bpp = TextureImage->format->BytesPerPixel;
			textureWidth  = TextureImage->w;
			textureHeight = TextureImage->h;
			glGenTextures( 1, &texture );
			glBindTexture( GL_TEXTURE_2D, texture );

			int colorFormat = GL_RGB;

			if(bpp == 4)
				colorFormat = GL_RGBA;
			if(bpp == 1)
				colorFormat = GL_LUMINANCE;
			if(bpp == 2)
				colorFormat = GL_LUMINANCE_ALPHA;

			glTexImage2D(GL_TEXTURE_2D, 0,colorFormat, TextureImage->w, TextureImage->h, 0,colorFormat, GL_UNSIGNED_BYTE,TextureImage->pixels);

			glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
			glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );

			 /* Free up any memory we may have used */
			    if ( TextureImage)
				    SDL_FreeSurface( TextureImage);
		}
		else {
			printf("Image Not loaded reason: %s",SDL_GetError());
		}
}
Texture::~Texture() {
	// TODO Auto-generated destructor stub
}

void Texture::draw(int x,int y,int width,int height) {


	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glPushMatrix();
	//glTranslatef((xpos+(dw/2)),(ypos+(dh/2)),0.0f);
	//glRotatef(rotAngle,0.0f,0.0f,1.0f);
	//glTranslatef(-(xpos+(dw/2)),-(ypos+(dh/2)),0.0f);

	glEnable(GL_TEXTURE_2D);
	//glActiveTextureARB(GL_TEXTURE0_ARB);
	glActiveTextureARB(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D,texture);
	glBegin(GL_QUADS);
	//glColor3f(0.0,0.0,1.0);
	glTexCoord2f(0.0f,1.0f);  glVertex3f(x + 00000, y + height, 0.0f);
	glTexCoord2f(1.0f,1.0f);  glVertex3f(x + width, y + height, 0.0f);
	glTexCoord2f(1.0f,0.0f);  glVertex3f(x + width, y + 000000, 0.0f);
	glTexCoord2f(0.0f,0.0f);  glVertex3f(x + 00000, y + 000000, 0.0f);
	glEnd();
	glDisable(GL_BLEND);
	glPopMatrix();


	}

} /* namespace Graphics */
} /* namespace Venpa2D */
