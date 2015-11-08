/*
 * ApplicationConfig.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#include "ApplicationConfig.h"

namespace Venpa2D {
namespace Core {

ApplicationConfig::ApplicationConfig() {
	screenWidth = 640;
	screenHeight= 480;
	title = "Venpa2D";

}

ApplicationConfig::~ApplicationConfig() {
	// TODO Auto-generated destructor stub
}


int ApplicationConfig::getScreenHeight() {
	return this->screenHeight;
}

int ApplicationConfig::getScreenWidth() {
	return this->screenWidth;
}

const char* ApplicationConfig::getTitle() {
	return this->title;
}
void ApplicationConfig::setScreeHeight(int height) {
	this->screenHeight = height;
}

void ApplicationConfig::setScreenWidth(int width) {
	this->screenWidth = width;
}

void ApplicationConfig::setTitle(const char* title) {

	this->title = title;
}

} /* namespace Core */
} /* namespace Venpa2D */
