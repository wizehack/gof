/*
 * ConcreteStrategyA.h
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETESTRATEGYA_H_
#define CONCRETESTRATEGYA_H_

#include "Strategy.h"

namespace std {

class ConcreteStrategyA: public Strategy {
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	void doAlgorithm();
};

} /* namespace std */

#endif /* CONCRETESTRATEGYA_H_ */
