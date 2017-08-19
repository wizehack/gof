/*
 * LOVEPoster.h
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#ifndef LOVEPOSTER_H_
#define LOVEPOSTER_H_

#include "Poster.h"
#include <string>
namespace std {

class LOVEPoster: public Poster {
public:
	LOVEPoster();
	virtual ~LOVEPoster();
	void display();
private:
	string message;
};

} /* namespace std */

#endif /* LOVEPOSTER_H_ */
