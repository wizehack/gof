/*
 * ChatMediator.cpp
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#include "ChatMediator.h"
#include "Colleague.h"
#include <iostream>

ChatMediator::ChatMediator() {}

ChatMediator::~ChatMediator() {}

void ChatMediator::appendUser(Colleague* colleague) {
	mList.push_back(colleague);
	std::list<Colleague*>::iterator p = mList.begin();

	while(p != mList.end()){
		std::string str=colleague->getName() + "님이 로그인 하셨습니다";
		(*p)->receiveMessages(str);
		p++;
	}
	std::cout << "-------------------------------------------" << std::endl;

}

void ChatMediator::removeUser(Colleague* colleague) {
	mList.remove(colleague);
	std::list<Colleague*>::iterator p = mList.begin();

	while(p != mList.end()){
		std::string str = colleague->getName() + "님이 로그아웃 하셨습니다";
			(*p)->receiveMessages(str);
			p++;
	}

	std::cout << "-------------------------------------------" << std::endl;
}

void ChatMediator::sendMessage(std::string message, Colleague* sender) {
	std::list<Colleague*>::iterator p = mList.begin();
	std::string str = (*p)->getName() + " : " + message;
	while(p != mList.end()){
		if((*p) != sender){
			(*p)->receiveMessages(str);
		}
		p++;
	}
}
