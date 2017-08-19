/*
 * Originator.cpp
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#include "Originator.h"

Originator::Originator():_state(0) {}

Originator::~Originator() {}

void Originator::setState(int state){
	_state = state;
}

int Originator::getState(){
	return _state;
}
