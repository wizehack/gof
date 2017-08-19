//============================================================================
// Name        : IteratorPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Aggregate.h"
#include "ConcreteAggregate.h"
#include "Iterator.h"
#include "Item.h"

#include <string>
#include <iostream>
using namespace std;

int main() {
	Aggregate<Item>* aggregate = new ConcreteAggregate();
	Iterator<Item>* iterator = aggregate->createIterator();

	while(iterator->hasNext()){
		std::cout << iterator->next()->getName() << std::endl;
	}
}
