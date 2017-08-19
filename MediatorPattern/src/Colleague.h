/*
 * Colleague.h
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#ifndef COLLEAGUE_H_
#define COLLEAGUE_H_
#include "Mediator.h"
#include <string>
class Colleague {
public:
	Colleague(Mediator* m, std::string name);
	virtual ~Colleague();
	virtual void sendMessages(std::string str)=0;
	virtual void receiveMessages(std::string str)=0;

	std::string& getName() {
		return mName;
	}

	Mediator*& getMediator() {
		return pMediator;
	}


protected:
	Mediator* pMediator;
	std::string mName;
};

#endif /* COLLEAGUE_H_ */
