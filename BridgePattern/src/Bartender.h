/*
 * Bartender.h
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#ifndef BARTENDER_H_
#define BARTENDER_H_
#include "CocktailMaker.h"
#include <string>

class CocktailMaker;
class Bartender {
public:
	Bartender();
	virtual ~Bartender();
	virtual void talk();
	virtual void serveCocktail(std::string cocktail);
private:
	CocktailMaker* _cMaker;
};

#endif /* BARTENDER_H_ */
