/*
 * Receiver.cpp
 *
 *  Created on: 2014. 5. 12.
 *      Author: hyunsangyoun
 */

#include "Receiver.h"
#include <iostream>

Receiver::Receiver() {}

Receiver::~Receiver() {}

void Receiver::action() {
	std::cout << "receiver's action() is called" << std::endl;
}
