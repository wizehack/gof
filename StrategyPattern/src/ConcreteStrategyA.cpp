/*
 * ConcreteStrategyA.cpp
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#include "ConcreteStrategyA.h"
#include <iostream>

namespace std {

ConcreteStrategyA::ConcreteStrategyA() {}

ConcreteStrategyA::~ConcreteStrategyA() {}

void ConcreteStrategyA::doAlgorithm() {
	cout << "algorithm A was run" << endl;
}

} /* namespace std */
