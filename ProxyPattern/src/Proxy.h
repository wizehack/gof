/*
 * Proxy.h
 *
 *  Created on: 2014. 5. 15.
 *      Author: hyunsangyoun
 */

#ifndef PROXY_H_
#define PROXY_H_

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject{
public:
	Proxy();
	virtual ~Proxy();
	int request(int x, int y);
	int simpleRequest();
private:
	RealSubject* _subject;
};

#endif /* PROXY_H_ */
