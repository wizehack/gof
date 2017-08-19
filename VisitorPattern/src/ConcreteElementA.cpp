/*
 * ConcreteElementA.cpp
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#include "ConcreteElementA.h"
#include <iostream>

ConcreteElementA::ConcreteElementA() {}

ConcreteElementA::~ConcreteElementA() {}

void ConcreteElementA::accept(Visitor& v){
	v.visitConcreteElementA(this);
}

void ConcreteElementA::operationA() {
	std::cout << "ConcreteElementA::operationA() is called" << std::endl;
}
