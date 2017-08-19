/*
 * NumberViewer.h
 *
 *  Created on: 2014. 4. 21.
 *      Author: hyunsangyoun
 */

#ifndef NUMBERVIEWER_H_
#define NUMBERVIEWER_H_

#include "Observer.h"
#include "LGEStock.h"
namespace std {

class NumberViewer: public Observer {
public:
	NumberViewer(LGEStock*);
	virtual ~NumberViewer();
	virtual void update(Stock*);
	virtual void view();
private:
	LGEStock* _stock;
	int time;
};

} /* namespace std */

#endif /* NUMBERVIEWER_H_ */
