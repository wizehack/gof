/*
 * JSonObjectBuilder.cpp
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#include "JSonObjectBuilder.h"
#include "JSon.h"
#include <iostream>

JSonObjectBuilder::JSonObjectBuilder(const std::string& jSonStr):_jSonStr(jSonStr){
	std::shared_ptr<JSon> jSon (new JSon());
	_jSon = jSon;
}

JSonObjectBuilder::~JSonObjectBuilder() {}

void JSonObjectBuilder::extractMembers(){
	int i=0;
	int j=0;
	int size=0;
	int end = _jSonStr.size();

	while(i < end || j < end){
		i = _jSonStr.find("\"", j);
		j = _jSonStr.find(":", i);

		if(i > 0 && j > 0){
			size = j-i-2;
			std::string key = _jSonStr.substr(i+1, size);

			i = _jSonStr.find("\"", j);
			j = _jSonStr.find("\"", i+1);

			size = j-i-1;
			std::string value = _jSonStr.substr(i+1, size);

			_jSon->setAttribute(key, value);
			i=i+1;
			j=j+1;

		} else {
			break;
		} //else
	} //while
} //extractMembers()

void JSonObjectBuilder::fillStatement(){
	_jSon->setStr(_jSonStr);
}

std::shared_ptr<JSon> JSonObjectBuilder::getJSonObject(){
	return _jSon;
}
