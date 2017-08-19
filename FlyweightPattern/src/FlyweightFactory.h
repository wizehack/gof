/*
 * FlyweightFactory.h
 *
 *  Created on: 2014. 5. 6.
 *      Author: wizehack
 */

#ifndef FLYWEIGHTFACTORY_H_
#define FLYWEIGHTFACTORY_H_

#include "Flyweight.h"
#include "ConcreteFlyweight.h"
#include <map>
class FlyweightFactory {
public:
	FlyweightFactory();
	virtual ~FlyweightFactory();
	Flyweight* getCharacter(char c);

private:
	Flyweight* charPool[26];
};

#endif /* FLYWEIGHTFACTORY_H_ */
