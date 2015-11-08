//============================================================================
// Name        : Venpa2D.cpp
// Author      : Raghuram Iyer "Ragzzy-R"
// Version     :
// Copyright   : Software given under LGPL
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Venpa2DApplication.h"
#include "HelloTest.h"
using namespace std;


int main() {

	Venpa2D::Core::Venpa2DApplication app;
	Venpa2D::Core::ApplicationConfig config;
	config.setScreeHeight(480);
	config.setScreenWidth(640);
	config.setTitle("Venpa Test");
	HelloTest test;
	app.initialize(config,test);



}
