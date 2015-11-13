#pragma once
/*
 * ApplicationConfig.h
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram Iyer
 */

#ifndef CORE_APPLICATIONCONFIG_H_
#define CORE_APPLICATIONCONFIG_H_

namespace Venpa2D {
namespace Core {

class ApplicationConfig {
public:
	ApplicationConfig();
	virtual ~ApplicationConfig();
private:
	int screenWidth;
	int screenHeight;
	const char* title;

public:
	void setScreenWidth(int width);
	void setScreeHeight(int height);
	void setTitle(const char*);
	int getScreenWidth();
	int getScreenHeight();
	const char* getTitle();

};

} /* namespace Core */
} /* namespace Venpa2D */

#endif /* CORE_APPLICATIONCONFIG_H_ */
