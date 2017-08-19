/*
 * Strategy.h
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_

namespace std {

class Strategy {
public:
	virtual ~Strategy();
	virtual void doAlgorithm()=0;

protected:
	Strategy();
};


} /* namespace std */

#endif /* STRATEGY_H_ */
