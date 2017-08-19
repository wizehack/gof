/*
 * ConcreteIterator.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEITERATOR_H_
#define CONCRETEITERATOR_H_

#include "Iterator.h"
#include "Item.h"

class ConcreteIterator: public Iterator<Item> {
public:
	ConcreteIterator(Item* items, int maxItems);
	virtual ~ConcreteIterator();
	bool hasNext();
	Item* next();
private:
	Item* _items;
	int _position;
	int _maxItems;
};

#endif /* CONCRETEITERATOR_H_ */
