/*
 * Bartender.cpp
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#include "Bartender.h"
#include <iostream>

Bartender::Bartender():_cMaker(0) {}

Bartender::~Bartender() {}

void Bartender::talk(){
	std::cout << "talking with customers" << std::endl;
}

void Bartender::serveCocktail(std::string cocktail) {
	_cMaker = new CocktailMaker();
	_cMaker->makeCocktail(cocktail);
	delete _cMaker;
}
