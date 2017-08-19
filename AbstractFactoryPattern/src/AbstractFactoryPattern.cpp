//============================================================================
// Name        : AbstractFactoryPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "AbstractFactory.h"

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main() {
	AbstractFactory* factory1 = new ConcreteFactory1();
	AbstractFactory* factory2 = new ConcreteFactory2();

	AbstractProductA* cpA1 = factory1->createProductA();
	AbstractProductA* cpA2 = factory2->createProductA();

	AbstractProductB* cpB1 = factory1->createProductB();
	AbstractProductB* cpB2 = factory2->createProductB();

	cpA1->useProductA();
	cpA2->useProductA();
	cpB1->useProductB();
	cpB2->useProductB();

	delete factory1;
	delete factory2;
	delete cpA1;
	delete cpA2;
	delete cpB1;
	delete cpB2;
	return 0;
}
