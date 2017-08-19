/*
 * ConcreteAggregate.cpp
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include <iostream>
ConcreteAggregate::ConcreteAggregate() {
	_items[0].setName("AAAA");
	_items[1].setName("BBBB");
	_items[2].setName("CCCC");
	_items[3].setName("DDDD");
}

ConcreteAggregate::~ConcreteAggregate() {}

Iterator<Item>* ConcreteAggregate::createIterator() {
	return new ConcreteIterator(_items, MAX);
}
