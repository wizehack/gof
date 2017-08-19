/*
 * Observer.h
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "Stock.h"
namespace std {

class Stock;
class Observer {
public:
	Observer();
	virtual ~Observer();
	virtual void update(Stock* stock)=0;
};

} /* namespace std */

#endif /* OBSERVER_H_ */
