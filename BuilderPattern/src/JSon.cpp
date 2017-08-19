/*
 * JSon.cpp
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#include "JSon.h"
#include <string>

JSon::JSon(){}

JSon::~JSon() {}

void JSon::setAttribute(std::string& key, std::string& value){
	_attributes[key] = value;
}

std::string JSon::getValue(std::string& key){
	return _attributes[key];
}

void JSon::setStr(std::string& str){
	_str = str;
}

std::string JSon::getStr(){
	return _str;
}
