/*
 * Main.cpp
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#include "LGEStock.h"
#include "NumberViewer.h"
#include "BarViewer.h"

using namespace std;
int main(){
	LGEStock *stock = new LGEStock();
	NumberViewer *numberViewer = new NumberViewer(stock);
	BarViewer *barViewer = new BarViewer(stock);

	stock->tick(1);

	delete stock;
	delete barViewer;
	delete numberViewer;

	return 0;
}


