/*
 * AnotherReceiver.cpp
 *
 *  Created on: 2014. 5. 13.
 *      Author: hyunsangyoun
 */

#include "AnotherReceiver.h"
#include <iostream>

AnotherReceiver::AnotherReceiver() {}

AnotherReceiver::~AnotherReceiver() {}

void AnotherReceiver::func1() {
	std::cout << "func1() is called" << std::endl;
}

void AnotherReceiver::func2() {
	std::cout << "func2() is called" << std::endl;
}

void AnotherReceiver::func3() {
	std::cout << "func3() is called" << std::endl;
}
