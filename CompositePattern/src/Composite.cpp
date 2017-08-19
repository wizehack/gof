/*
 * Composite.cpp
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#include "Composite.h"
#include <vector>
#include <iostream>

Composite::Composite(const std::string name):Component(name) {}
Composite::~Composite() {}

void Composite::create(Component* component){
	_vlist.push_back(component);
}

void Composite::remove(Component* component){
	//not yet implemented
}

void Composite::show() {
	std::vector<Component*>::iterator iter;
	iter = _vlist.begin();
	while(iter != _vlist.end()) {
	    std::cout << (*iter)->getName() << " ";
	    iter++;
	}
	std::cout << std::endl;
}


