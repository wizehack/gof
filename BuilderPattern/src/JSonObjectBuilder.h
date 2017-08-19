/*
 * JSonObjectBuilder.h
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#ifndef JSONOBJECTBUILDER_H_
#define JSONOBJECTBUILDER_H_

#include "JSon.h"
#include "Builder.h"
#include <memory>
#include <string>

class JSonObjectBuilder : public Builder {
public:
	JSonObjectBuilder(const std::string& jSonStr);
	virtual ~JSonObjectBuilder();
	void extractMembers();
	void fillStatement();
	std::shared_ptr<JSon> getJSonObject();
private:
	std::shared_ptr<JSon>_jSon;
	std::string _jSonStr;
};

#endif /* JSONOBJECTBUILDER_H_ */
