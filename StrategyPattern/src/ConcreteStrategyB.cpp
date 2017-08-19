/*
 * ConcreteStrategyB.cpp
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#include "ConcreteStrategyB.h"
#include <iostream>
namespace std {

ConcreteStrategyB::ConcreteStrategyB() {}

ConcreteStrategyB::~ConcreteStrategyB() {}

void ConcreteStrategyB::doAlgorithm(){
	cout << "algorithm B was run" << endl;
}

} /* namespace std */
