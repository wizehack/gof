/*
 * Stock.h
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <vector>
#include <list>
#include "Observer.h"
namespace std {

class Observer;
class Stock {
public:
	Stock();
	virtual ~Stock();
	virtual void attach(Observer*);
	virtual void detach(Observer*);
	virtual void notify();

	void tick(int time);
private:
	std::vector<Observer*>* _observerList;
};

} /* namespace std */

#endif /* STOCK_H_ */
