/*
 * Aggregate.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef AGGREGATE_H_
#define AGGREGATE_H_

#include "Iterator.h"

template <class U>
class Aggregate {
public:
	Aggregate(){}
	virtual ~Aggregate(){}
	virtual Iterator<U>* createIterator()=0;
};

#endif /* AGGREGATE_H_ */
