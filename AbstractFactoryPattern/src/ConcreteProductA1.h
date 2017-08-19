/*
 * ConcreteProductA1.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEPRODUCTA1_H_
#define CONCRETEPRODUCTA1_H_

#include "AbstractProductA.h"

class ConcreteProductA1: public AbstractProductA {
public:
	ConcreteProductA1();
	virtual ~ConcreteProductA1();
	virtual void useProductA();
};

#endif /* CONCRETEPRODUCTA1_H_ */
