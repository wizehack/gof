/*
 * IDCard.h
 *
 *  Created on: 2014. 4. 17.
 *      Author: hyunsangyoun
 */

#ifndef IDCARD_H_
#define IDCARD_H_

#include "Product.h"
#include <string>

namespace std {

class IDCard: public Product {
public:
	IDCard(string owner);
	~IDCard();
	void use();
	string getOwner();
private:
	string owner;
};

} /* namespace std */

#endif /* IDCARD_H_ */
