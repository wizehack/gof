/*
 * User.h
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#ifndef USER_H_
#define USER_H_

#include "Colleague.h"

class User : public Colleague{
public:
	User(Mediator* m, std::string name);
	virtual ~User();
	void sendMessages(std::string str);
	void receiveMessages(std::string str);
};

#endif /* USER_H_ */
