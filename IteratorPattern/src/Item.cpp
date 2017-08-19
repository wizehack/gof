/*
 * Item.cpp
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#include "Item.h"

Item::Item() {}

Item::~Item() {}

void Item::setName(std::string name){
	_name = name;
}

std::string Item::getName(){
	return _name;
}
