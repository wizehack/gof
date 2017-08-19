/*
 * JSon.h
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#ifndef JSON_H_
#define JSON_H_

#include <map>
#include <string>

class JSon {
public:
	JSon();
	virtual ~JSon();
	std::string getValue(std::string& key);
	void setAttribute(std::string& key, std::string& value);
	void setStr(std::string& str);
	std::string getStr();
private:
	std::map<std::string, std::string> _attributes;
	std::string _str;
};

#endif /* JSON_H_ */
