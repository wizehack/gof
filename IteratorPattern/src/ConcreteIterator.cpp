/*
 * ConcreteIterator.cpp
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#include "ConcreteIterator.h"

ConcreteIterator::ConcreteIterator(Item* items, int maxItems){
	_items = items;
	_maxItems = maxItems;
	_position = 0;
}

ConcreteIterator::~ConcreteIterator() {}

bool ConcreteIterator::hasNext(){
	if(_position == _maxItems){
		return false;
	} else {
		return true;
	}
}

Item* ConcreteIterator::next(){
	Item* nextItem = &_items[_position++];
	return nextItem;
}
