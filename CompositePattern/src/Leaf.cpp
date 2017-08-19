/*
 * Leaf.cpp
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#include "Leaf.h"
#include "string"

Leaf::Leaf(const std::string name):Component(name) {}
Leaf::~Leaf() {}
void Leaf::show(){
	std::cout << Component::getName() << std::endl;
}
