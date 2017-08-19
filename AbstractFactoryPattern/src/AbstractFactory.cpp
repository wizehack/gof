/*
 * AbstractFactory.cpp
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#include "AbstractFactory.h"

AbstractFactory::AbstractFactory() {}

AbstractFactory::~AbstractFactory() {}

AbstractProductA* AbstractFactory::createProductA(){
	return new AbstractProductA();
}

AbstractProductB* AbstractFactory::createProductB(){
	return new AbstractProductB();
}
