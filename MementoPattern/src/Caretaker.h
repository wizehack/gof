/*
 * Caretaker.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef CARETAKER_H_
#define CARETAKER_H_

#include "Memento.h"

template<class T>
class Caretaker {
public:
	Caretaker(){}
	virtual ~Caretaker(){}
	Memento<T>* saveState(T* originator){
		Memento<T>* memento = new Memento<T>();
		memento->setState(*originator);
		return memento;
	}

	T* restoreState(Memento<T>* memento){
		T originate = memento->getState();
		return &originate;
	}
};

#endif /* CARETAKER_H_ */
