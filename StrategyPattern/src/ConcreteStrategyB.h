/*
 * ConcreteStrategyB.h
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETESTRATEGYB_H_
#define CONCRETESTRATEGYB_H_

#include "Strategy.h"

namespace std {

class ConcreteStrategyB: public Strategy {
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	void doAlgorithm();
};

} /* namespace std */

#endif /* CONCRETESTRATEGYB_H_ */
