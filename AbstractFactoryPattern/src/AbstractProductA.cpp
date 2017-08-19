/*
 * AbstractProductA.cpp
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#include "AbstractProductA.h"
#include <iostream>

AbstractProductA::AbstractProductA() {}

AbstractProductA::~AbstractProductA() {}

void AbstractProductA::useProductA(){
	std::cout << "use productA" << std::endl;
}

