/*
 * HelloTest.cpp
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#include "HelloTest.h"
#include <fstream>
using namespace std;
HelloTest::HelloTest() {

}

HelloTest::~HelloTest() {
	// TODO Auto-generated destructor stub
}

void HelloTest::init() {

	texture[0] = new Texture("src/test/parrot.png");
	texture[1] = new Texture("src/test/parrot.png");
	texture[2] = new Texture("src/test/parrot.png");
	texture[3] = new Texture("src/test/parrot.png");
	texture[4] = new Texture("src/test/parrot.png");
	texture[5] = new Texture("src/test/parrot.png");
	texture[6] = new Texture("src/test/parrot.png");
	texture[7] = new Texture("src/test/parrot.png");
	texture[8] = new Texture("src/test/parrot.png");
	texture[9] = new Texture("src/test/parrot.png");
	ofstream myfile;
	  myfile.open ("example.txt");
	  myfile << "Writing this to a file.\n";
	  myfile.close();
}

void HelloTest::update() {

}


void HelloTest::onPause() {

}

void HelloTest::onResume() {

}
void HelloTest::render() {

	glClearColor(0.0, 0.0, 0.0, 1.0);
		glClear(GL_COLOR_BUFFER_BIT);
	texture[0]->draw(0,0,100,100);
	texture[1]->draw(100,0,100,100);
	texture[2]->draw(200,0,100,100);
	texture[3]->draw(0,100,100,100);
	texture[4]->draw(100,100,100,100);
	texture[5]->draw(200,100,100,100);
	texture[6]->draw(0,200,100,100);
	texture[7]->draw(100,200,100,100);
	texture[8]->draw(200,200,100,100);
	texture[9]->draw(0,200,100,100);
}

void HelloTest::dispose() {

}
void HelloTest::onResize(int width,int height) {

}
