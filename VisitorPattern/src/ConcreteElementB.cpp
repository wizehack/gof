/*
 * ConcreteElementB.cpp
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#include "ConcreteElementB.h"
#include <iostream>

ConcreteElementB::ConcreteElementB() {}

ConcreteElementB::~ConcreteElementB() {}

void ConcreteElementB::accept(Visitor& v){
	v.visitConcreteElementB(this);
}

void ConcreteElementB::operationB() {
	std::cout << "ConcreteElementB::operationB() is called" << std::endl;
}
