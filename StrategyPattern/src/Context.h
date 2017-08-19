/*
 * Context.h
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "Strategy.h"

namespace std {
class Context {
public:
	Context(Strategy* strategy);
	virtual ~Context();
	void contextInterface();

private:
	Strategy* _strategy;
};

} /* namespace std */

#endif /* CONTEXT_H_ */
