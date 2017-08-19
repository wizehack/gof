/*
 * User.cpp
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#include "User.h"

#include <iostream>

User::User(Mediator* m, std::string name):Colleague(m, name) {}

User::~User() {}

void User::sendMessages(std::string str) {
	std::cout << this->getName() << " send : " << str << std::endl;
	pMediator->sendMessage(str, this);
}

void User::receiveMessages(std::string str) {
	std::cout << this->mName << " recv : " << str << 	std::endl;
}

