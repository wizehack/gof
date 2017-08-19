/*
 * IDCard.cpp
 *
 *  Created on: 2014. 4. 17.
 *      Author: hyunsangyoun
 */
#include "IDCard.h"
#include <string>
#include <iostream>

namespace std {

IDCard::IDCard(string owner):Product(owner) {
	cout << owner << ": IDCard is created" << endl;
	this->owner = owner;
}

IDCard::~IDCard() {}

void IDCard::use() {
	cout << owner << " used IDCard" << endl;
}

string IDCard::getOwner(){
	return this->owner;
}

} /* namespace std */
