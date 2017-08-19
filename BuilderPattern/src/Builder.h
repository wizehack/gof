/*
 * Builder.h
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#ifndef BUILDER_H_
#define BUILDER_H_

#include <string>

class Builder {
public:
	Builder();
	virtual ~Builder();
	virtual void extractMembers();
	virtual void fillStatement();
};

#endif /* BUILDER_H_ */
