/*
 * LGEStock.cpp
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */
#include "LGEStock.h"
#include <iostream>

namespace std {

LGEStock::LGEStock(){
	price[0]=20000;
	price[1]=30000;
	price[2]=40000;
	price[3]=30000;
	price[4]=20000;
}

LGEStock::~LGEStock() {}

int LGEStock::getPrice(int time){

	return price[time];
}

} /* namespace std */
