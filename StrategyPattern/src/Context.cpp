/*
 * Context.cpp
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#include "Context.h"
#include "Strategy.h"

namespace std {

Context::Context(Strategy* strategy) {
	this->_strategy = strategy;
}

Context::~Context() {}

void Context::contextInterface() {
	this->_strategy->doAlgorithm();
	delete this->_strategy;
}

} /* namespace std */
