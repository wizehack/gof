/*
 * Decorator.h
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

#include "Poster.h"

namespace std {

class Decorator: public Poster {
public:
	Decorator(Poster *);
	virtual ~Decorator();
	virtual void display();
protected:
	Poster* _poster;
};

} /* namespace std */

#endif /* DECORATOR_H_ */
