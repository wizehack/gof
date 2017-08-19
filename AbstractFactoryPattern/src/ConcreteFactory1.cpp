/*
 * ConcreteFactory1.cpp
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

ConcreteFactory1::ConcreteFactory1() {}

ConcreteFactory1::~ConcreteFactory1() {}

AbstractProductA* ConcreteFactory1::createProductA(){
	return new ConcreteProductA1();
}

AbstractProductB* ConcreteFactory1::createProductB(){
	return new ConcreteProductB1();
}
