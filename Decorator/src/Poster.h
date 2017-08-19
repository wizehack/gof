/*
 * Poster.h
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#ifndef POSTER_H_
#define POSTER_H_

namespace std {

class Poster {
public:
	Poster();
	virtual ~Poster();
	virtual void display()=0;
};

} /* namespace std */

#endif /* POSTER_H_ */
