/*
 * AbstractProductB.cpp
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#include "AbstractProductB.h"
#include <iostream>

AbstractProductB::AbstractProductB() {}

AbstractProductB::~AbstractProductB() {}

void AbstractProductB::useProductB(){
	std::cout << "use productB" << std::endl;
}
