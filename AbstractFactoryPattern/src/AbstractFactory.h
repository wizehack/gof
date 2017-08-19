/*
 * AbstractFactory.h
 *
 *  Created on: 2014. 5. 14.
 *      Author: hyunsangyoun
 */

#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
	AbstractFactory();
	virtual ~AbstractFactory();
	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

#endif /* ABSTRACTFACTORY_H_ */
