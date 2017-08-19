/*
 * IDCardFactory.h
 *
 *  Created on: 2014. 4. 17.
 *      Author: hyunsangyoun
 */

#ifndef IDCARDFACTORY_H_
#define IDCARDFACTORY_H_

#include "Factory.h"
#include "Product.h"
#include <list>

namespace std {

class IDCardFactory: public Factory {
public:
	IDCardFactory();
	virtual ~IDCardFactory();
	Product* createProduct(string owner);
	void registerProduct(Product* product);
	std::list<string> getOwners();
private:
	std::list<string> owners;
};

} /* namespace std */

#endif /* IDCARDFACTORY_H_ */
