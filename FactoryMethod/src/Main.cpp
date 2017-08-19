/*
 * Main.cpp
 *
 *  Created on: 2014. 4. 16.
 *      Author: hyunsangyoun
 */

using namespace std;

#include "Factory.h"
#include "Product.h"
#include "IDCardFactory.h"

int main(){
	Factory* factory = new IDCardFactory();
	Product* card1 = factory->create("윤현상");
	Product* card2 = factory->create("정동환");

	card1->use();
	card2->use();

	delete card1;
	delete card2;
	delete factory;
	return 0;
}
