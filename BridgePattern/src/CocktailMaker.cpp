/*
 * CocktailMaker.cpp
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#include "CocktailMaker.h"
#include <iostream>

CocktailMaker::CocktailMaker() {}

CocktailMaker::~CocktailMaker() {}

void CocktailMaker::makeCocktail(std::string cocktail) {
	std::cout << "A CocktailMaker makes " << cocktail << " according to a standard recipe" << std::endl;
}
