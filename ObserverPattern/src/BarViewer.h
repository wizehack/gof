/*
 * BarViewer.h
 *
 *  Created on: 2014. 4. 22.
 *      Author: hyunsangyoun
 */

#ifndef BARVIEWER_H_
#define BARVIEWER_H_
#include "Observer.h"
#include "LGEStock.h"
namespace std {

class BarViewer: public Observer {
public:
	BarViewer(LGEStock* s);
	virtual ~BarViewer();
	virtual void update(Stock*);
	virtual void view();
private:
	LGEStock* _stock;
	int time;
};

} /* namespace std */

#endif /* BARVIEWER_H_ */
