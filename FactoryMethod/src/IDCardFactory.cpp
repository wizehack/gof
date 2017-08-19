/*
 * IDCardFactory.cpp
 *
 *  Created on: 2014. 4. 17.
 *      Author: hyunsangyoun
 */

#include "IDCardFactory.h"
#include "Product.h"
#include "IDCard.h"
namespace std {

IDCardFactory::IDCardFactory() {}

IDCardFactory::~IDCardFactory() {}

Product* IDCardFactory::createProduct(string owner){
	return new IDCard(owner);
}

void IDCardFactory::registerProduct(Product* product){
	this->owners.push_back(dynamic_cast<IDCard*>(product)->getOwner());
}

std::list<string> IDCardFactory::getOwners(){
	return owners;
}
} /* namespace std */
