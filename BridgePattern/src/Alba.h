/*
 * Alba.h
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#ifndef ALBA_H_
#define ALBA_H_

#include "Bartender.h"
#include <iostream>
#include <string>
//#include "Master.h"

class CocktailMaker;
class Alba: public Bartender {
public:
	Alba();
	virtual ~Alba();
	virtual void serveCocktail(std::string cocktail);
public:
	CocktailMaker* _cocktailMaker;
};

#endif /* ALBA_H_ */
