/*
 * HelloTest.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#include "HelloTest.h"


HelloTest::HelloTest() {

}

HelloTest::~HelloTest() {
	// TODO Auto-generated destructor stub
}

void HelloTest::init() {

	printf("HELLO");
}

void HelloTest::update() {

}


void HelloTest::onPause() {

}

void HelloTest::onResume() {

}
void HelloTest::render() {

	texture->draw(0,0,1,1);
}

void HelloTest::dispose() {

}
void HelloTest::onResize(int width,int height) {

}
