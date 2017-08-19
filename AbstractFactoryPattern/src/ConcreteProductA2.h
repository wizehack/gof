/*
 * ConcreteProductA2.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEPRODUCTA2_H_
#define CONCRETEPRODUCTA2_H_

#include "AbstractProductA.h"

class ConcreteProductA2 : public AbstractProductA{
public:
	ConcreteProductA2();
	virtual ~ConcreteProductA2();
	virtual void useProductA();
};

#endif /* CONCRETEPRODUCTA2_H_ */
