/*
 * Component.cpp
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#include "Component.h"
#include <string>
Component::Component(const std::string name):_name(name){}
Component::~Component() {}

void Component::show(){}
std::string Component::getName(){
	return _name;
}
