/*
 * ConcreteFactory1.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEFACTORY1_H_
#define CONCRETEFACTORY1_H_

#include "AbstractFactory.h"

class ConcreteFactory1: public AbstractFactory {
public:
	ConcreteFactory1();
	virtual ~ConcreteFactory1();
	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

#endif /* CONCRETEFACTORY1_H_ */
