/*
 * Memento.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef MEMENTO_H_
#define MEMENTO_H_

template<class T>
class Memento {
public:
	Memento(){}
	virtual ~Memento(){}

	void setState(T state){
		_state = state;
	}
	T getState(){
		return _state;
	}
private:
	T _state;
};

#endif /* MEMENTO_H_ */
