/*
 * Factory.cpp
 *
 *  Created on: 2014. 4. 16.
 *      Author: hyunsangyoun
 */

#include "Factory.h"
#include "Product.h"
#include <string>
namespace std {

Factory::Factory() {}

Factory::~Factory() {}

Product* Factory::create(string owner){
	Product* p = this->createProduct(owner);
	this->registerProduct(p);
	return p;
}

Product* Factory::createProduct(string owner){return 0;}

void Factory::registerProduct(Product* product){}

} /* namespace std */
