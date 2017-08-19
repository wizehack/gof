/*
 * Alba.cpp
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#include "Alba.h"
#include "Master.h"

Alba::Alba():_cocktailMaker(0) {}

Alba::~Alba() {}

void Alba::serveCocktail(std::string cocktail){
	_cocktailMaker = new Master();
	_cocktailMaker->makeCocktail(cocktail);
	delete _cocktailMaker;
}

