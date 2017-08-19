/*
 * ChatMediator.h
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#ifndef CHATMEDIATOR_H_
#define CHATMEDIATOR_H_
#include "Mediator.h"
#include <list>

class ChatMediator : public Mediator{
public:
	ChatMediator();
	virtual ~ChatMediator();
	void appendUser(Colleague* colleague);
	void removeUser(Colleague* colleague);
	void sendMessage(std::string message, Colleague* sender);

private:
  std::list<Colleague*> mList;
};

#endif /* CHATMEDIATOR_H_ */
