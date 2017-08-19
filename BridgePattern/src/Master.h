/*
 * Master.h
 *
 *  Created on: 2014. 5. 11.
 *      Author: wizehack
 */

#ifndef MASTER_H_
#define MASTER_H_

#include "CocktailMaker.h"

class Master: public CocktailMaker {
public:
	Master();
	virtual ~Master();
	virtual void makeCocktail(std::string cocktail);
};

#endif /* MASTER_H_ */
