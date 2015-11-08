/*
 * Texture.h
 *
 *  Created on: Nov 8, 2015
 *      Author: raghuram
 */

#ifndef GRAPHICS_TEXTURE_H_
#define GRAPHICS_TEXTURE_H_


#include <SDL_image.h>
#include <SDL_opengl.h>



namespace Venpa2D {

namespace Graphics {

class Texture {
public:
	Texture(const char* path);
	virtual ~Texture();
	void draw(int x,int y,int width,int height);
private:
	GLuint texture;
	int textureHeight;
	int textureWidth;
};

} /* namespace Graphics */
} /* namespace Venpa2D */

#endif /* GRAPHICS_TEXTURE_H_ */
