/*
 * Singleton.cpp
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#include "Singleton.h"

Singleton* Singleton::_singleton=0;

Singleton::~Singleton() {
	// TODO Auto-generated destructor stub
}
Singleton::Singleton() {
	// TODO Auto-generated constructor stub
}

Singleton* Singleton::getInstance(){
	if(_singleton == 0){
		_singleton = new Singleton();
	}

	return _singleton;
}

