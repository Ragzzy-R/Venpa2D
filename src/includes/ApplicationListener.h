/*
 * ApplicationListener.h
 *
 *  Created on: Nov 7, 2015
 *      Author: raghuram
 */

#ifndef INCLUDES_APPLICATIONLISTENER_H_
#define INCLUDES_APPLICATIONLISTENER_H_

namespace Venpa2D {
namespace Core {

class ApplicationListener {
public:
	virtual ~ApplicationListener()=default;
	virtual void init()=0;
	virtual void update()=0;
	virtual void render()=0;
	virtual void onResize(int width,int height)=0;
	virtual void onPause()=0;
	virtual void onResume()=0;
	virtual void dispose()=0;
};

} /* namespace Core */
} /* namespace Venpa2D */

#endif /* INCLUDES_APPLICATIONLISTENER_H_ */
