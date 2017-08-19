/*
 * Prototype.cpp
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#include "Prototype.h"

Prototype::Prototype():_state(0) {}

Prototype::Prototype(const Prototype& selfObj) {
	_state = selfObj._state;
}

Prototype::~Prototype() {}

int Prototype::getState() const {
	return _state;
}

void Prototype::setState(int state) {
	_state = state;
}
