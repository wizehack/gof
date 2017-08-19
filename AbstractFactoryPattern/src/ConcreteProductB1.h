/*
 * ConcreteProductB1.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEPRODUCTB1_H_
#define CONCRETEPRODUCTB1_H_

#include "AbstractProductB.h"

class ConcreteProductB1 : public AbstractProductB{
public:
	ConcreteProductB1();
	virtual ~ConcreteProductB1();
	virtual void useProductB();
};

#endif /* CONCRETEPRODUCTB1_H_ */
