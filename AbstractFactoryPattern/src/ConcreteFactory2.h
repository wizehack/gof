/*
 * ConcreteFactory2.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEFACTORY2_H_
#define CONCRETEFACTORY2_H_

#include "AbstractFactory.h"

class ConcreteFactory2: public AbstractFactory {
public:
	ConcreteFactory2();
	virtual ~ConcreteFactory2();
	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

#endif /* CONCRETEFACTORY2_H_ */
