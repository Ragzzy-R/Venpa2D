/*
 * HelloTest.h
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#ifndef TEST_HELLOTEST_H_
#define TEST_HELLOTEST_H_

#include "ApplicationListener.h"
#include "Texture.h"

using namespace Venpa2D::Core;
using namespace Venpa2D::Graphics;


class HelloTest : public ApplicationListener {
public:
	HelloTest();
	virtual ~HelloTest();
	void init();
	void update();
	void render();
	void onResize(int width,int height);
	void onPause();
	void onResume();
	void dispose();
private:
	Texture* texture = new Texture("../src/test/Capture.png");
	//Texture* texture = new Texture("../src/test/Image0.png");
};


#endif /* TEST_HELLOTEST_H_ */
