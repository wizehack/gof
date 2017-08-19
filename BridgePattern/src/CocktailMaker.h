/*
 * CocktailMaker.h
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#ifndef COCKTAILMAKER_H_
#define COCKTAILMAKER_H_

#include <string>
class CocktailMaker {
public:
	CocktailMaker();
	virtual ~CocktailMaker();
	virtual void makeCocktail(std::string cocktail);
};

#endif /* COCKTAILMAKER_H_ */
