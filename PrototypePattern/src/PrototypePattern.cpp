//============================================================================
// Name        : PrototypePattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Prototype.h"
#include "ConcretePrototype.h"

#include <iostream>

int main() {
	Prototype* proto = new ConcretePrototype();
	std::cout << "initial state of proto: " << proto->getState() << std::endl;

	proto->setState(100);
	std::cout << "current state of proto: " << proto->getState() << std::endl;

	Prototype* clonedProto = proto->clone();
	std::cout << "current state of clonedProto: " << clonedProto->getState() << std::endl;

	return 0;
}
