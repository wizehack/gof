/*
 * Master.cpp
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#include "Master.h"
#include <iostream>

Master::Master() {}

Master::~Master() {}

void Master::makeCocktail(std::string cocktail){
	std::cout << "Master makes " << cocktail << " according to his recipe" << std::endl;
}

