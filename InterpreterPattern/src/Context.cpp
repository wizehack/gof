/*
 * Context.cpp
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#include "Context.h"
#include <iostream>
Context::Context(){}

Context::~Context() {}

void Context::setTag(std::string& tag) {
	_tag = tag;
}

std::string& Context::getTag() {
	return _tag;
}

void Context::setValue(std::string& value){
	_value = value;
}

std::string& Context::getValue(){
	return _value;
}
