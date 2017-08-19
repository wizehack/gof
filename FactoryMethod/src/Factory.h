/*
 * Factory.h
 *
 *  Created on: 2014. 4. 16.
 *      Author: hyunsangyoun
 */

#ifndef FACTORY_H_
#define FACTORY_H_

#include "Product.h"
#include <string>

namespace std {

class Factory {
public:
	Factory();
	virtual ~Factory();
	Product* create(string owner);
	virtual Product* createProduct(string owner);
	virtual void registerProduct(Product* product);
};

} /* namespace std */

#endif /* FACTORY_H_ */
