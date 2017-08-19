/*
 * NumberViewer.cpp
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#include "NumberViewer.h"
#include <iostream>
namespace std {

NumberViewer::NumberViewer(LGEStock* s):_stock(s) {
	_stock->attach(this);
	time = 0;
}
NumberViewer::~NumberViewer() {}

void NumberViewer::update(Stock* stock){
	if(stock == _stock){
		view();
	}
}

void NumberViewer::view(){
	int price = _stock->getPrice(time);
	cout << "the stock price of LGE: " << price << endl;
	time++;
}

} /* namespace std */
