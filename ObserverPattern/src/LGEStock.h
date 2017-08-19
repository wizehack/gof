/*
 * LGEStock.h
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#ifndef LGESTOCK_H_
#define LGESTOCK_H_

#include "Stock.h"

namespace std {

class LGEStock: public Stock {
public:
	LGEStock();
	virtual ~LGEStock();
	virtual int getPrice(int time);
private:
	int price[5];
};

} /* namespace std */

#endif /* LGESTOCK_H_ */
