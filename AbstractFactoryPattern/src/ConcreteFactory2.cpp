/*
 * ConcreteFactory2.cpp
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

ConcreteFactory2::ConcreteFactory2() {}

ConcreteFactory2::~ConcreteFactory2() {}

AbstractProductA* ConcreteFactory2::createProductA(){
	return new ConcreteProductA2();
}

AbstractProductB* ConcreteFactory2::createProductB(){
	return new ConcreteProductB2();
}
