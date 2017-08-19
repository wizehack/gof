/*
 * RealSubject.h
 *
 *  Created on: 2014. 5. 15.
 *      Author: hyunsangyoun
 */

#ifndef REALSUBJECT_H_
#define REALSUBJECT_H_

#include "Subject.h"

class RealSubject : public Subject{
public:
	RealSubject();
	virtual ~RealSubject();
	int request(int x, int y);
	int simpleRequest();
};

#endif /* REALSUBJECT_H_ */
