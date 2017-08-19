/*
 * BarViewer.cpp
 *
 *  Created on: 2014. 4. 22.
 *      Author: hyunsangyoun
 */

#include "BarViewer.h"
#include <iostream>

namespace std {

BarViewer::BarViewer(LGEStock* s):_stock(s) {
	_stock->attach(this);
	time = 0;
}

BarViewer::~BarViewer() {}

void BarViewer::update(Stock* stock){
	if(stock == _stock){
		view();
	}
}

void BarViewer::view(){
	int price = _stock->getPrice(time);
	char bar='#';
	int sizeOfBar = price / 2000;

	int i;
//	cout << "the stock price of LGE: " << price << endl;
	cout << "the stock price of LGE: ";
	for(i=0; i<sizeOfBar; i++){
		cout << bar;
	}
	cout << endl;
	cout << endl;
	time++;
}

} /* namespace std */
