/*
 * Subject.h
 *
 *  Created on: 2014. 5. 15.
 *      Author: hyunsangyoun
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

class Subject {
public:
	Subject();
	virtual ~Subject();
	virtual int request(int x, int y)=0;
	virtual int simpleRequest()=0;
};

#endif /* SUBJECT_H_ */
