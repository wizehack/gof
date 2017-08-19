/*
 * Colleague.cpp
 *
 *  Created on: 2014. 5. 31.
 *      Author: wizehack
 */

#include "Colleague.h"

Colleague::Colleague(Mediator* m, std::string name) : pMediator(m), mName(name){}

Colleague::~Colleague() {}

void Colleague::sendMessages(std::string str){}
void Colleague::receiveMessages(std::string str){}
