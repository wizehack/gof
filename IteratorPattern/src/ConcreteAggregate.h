/*
 * ConcreteAggregate.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEAGGREGATE_H_
#define CONCRETEAGGREGATE_H_

#include "Aggregate.h"
#include "Item.h"
#include "Iterator.h"

class ConcreteAggregate: public Aggregate<Item> {
public:
	ConcreteAggregate();
	virtual ~ConcreteAggregate();
	virtual Iterator<Item>* createIterator();
private:
	static const unsigned int MAX=4;
	Item _items[MAX];
};

#endif /* CONCRETEAGGREGATE_H_ */
