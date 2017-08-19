/*
 * ConcreteProductB2.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEPRODUCTB2_H_
#define CONCRETEPRODUCTB2_H_

#include "AbstractProductB.h"

class ConcreteProductB2 : public AbstractProductB {
public:
	ConcreteProductB2();
	virtual ~ConcreteProductB2();
	virtual void useProductB();
};

#endif /* CONCRETEPRODUCTB2_H_ */
