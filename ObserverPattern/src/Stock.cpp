/*
 * Stock.cpp
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#include "Stock.h"
#include <iostream>
#include <unistd.h>
#include <algorithm>
#include <list>

namespace std {

Stock::Stock() {
	_observerList = new vector<Observer*>();
}

Stock::~Stock() {}

void Stock::attach(Observer* o){
	_observerList->push_back(o);
}

void Stock::detach(Observer* o){
	_observerList->erase(std::remove(_observerList->begin(), _observerList->end(), o), _observerList->end());
}

void Stock::tick(int ticktime){
	int i=0;
	while(i<5){
		notify();
		sleep(ticktime);
		i++;

		if(i==6)
			cout << "마감하였습니다." << endl;
	}
}

void Stock::notify() {
	vector<Observer*>::const_iterator iter = _observerList->begin();
	while(iter != _observerList->end()){
		(*iter)->update(this);
		iter++;
	}
}

} /* namespace std */
