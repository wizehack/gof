/*
 * ConcretePrototype.cpp
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#include "ConcretePrototype.h"
#include <iostream>
ConcretePrototype::ConcretePrototype():_state(0) {}

ConcretePrototype::ConcretePrototype(const Prototype& selfObj) :_state(0), Prototype(selfObj){}

ConcretePrototype::~ConcretePrototype() {}

Prototype* ConcretePrototype::clone() const {
	return new ConcretePrototype(*this);
}

void ConcretePrototype::setState(int state){
	_state = state;
}

int ConcretePrototype::getState(){
	return _state;
}
