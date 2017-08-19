/*
 * Product.h
 *
 *  Created on: 2014. 4. 16.
 *      Author: hyunsangyoun
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>

namespace std {

class Product {
public:
	Product(string owner);
	virtual ~Product();
	virtual void use();
};

} /* namespace std */

#endif /* PRODUCT_H_ */
