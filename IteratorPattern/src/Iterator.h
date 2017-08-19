/*
 * Iterator.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

template <class T>
class Iterator {
public:
	Iterator(){}
	virtual ~Iterator(){}
	virtual bool hasNext()=0;
	virtual T* next()=0;
};

#endif /* ITERATOR_H_ */
