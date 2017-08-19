/*
 * FlyweightFactory.cpp
 *
 *  Created on: 2014. 5. 6.
 *      Author: wizehack
 */

#include "FlyweightFactory.h"
#include <iostream>
FlyweightFactory::FlyweightFactory() {
	int i;
	for(i=0; i<26; i++){
		charPool[i]=0;
	}
}

FlyweightFactory::~FlyweightFactory() {}

Flyweight* FlyweightFactory::getCharacter(char c){
	if(c >= 65 && c<=90){
		if(charPool[c-65]!=0){
			std::cout<< c << " is reused" << std::endl;
			return charPool[c-65];
		} else {
			charPool[c-65] = new ConcreteFlyweight(c);
			std::cout<< c << " is created" << std::endl;
			return charPool[c-65];
		}
	} // if
	else {
		return 0;
	}

}
