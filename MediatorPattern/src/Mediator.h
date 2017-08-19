/*
 * Mediator.h
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#ifndef MEDIATOR_H_
#define MEDIATOR_H_

#include <string>
class Colleague;
class Mediator {
public:
	Mediator();
	virtual ~Mediator();
	virtual void appendUser(Colleague* colleague) = 0;
	virtual void removeUser(Colleague* colleague) = 0;
	virtual void sendMessage(std::string message, Colleague* sender) = 0;
};

#endif /* MEDIATOR_H_ */
