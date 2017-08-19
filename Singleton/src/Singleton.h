/*
 * Singleton.h
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

class Singleton {
public:
	virtual ~Singleton();
	static Singleton* getInstance();

protected:
	Singleton();

private:
	static Singleton* _singleton;
};

#endif /* SINGLETON_H_ */
