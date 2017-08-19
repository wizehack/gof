//============================================================================
// Name        : Main.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "JSon.h"
#include "JSonObjectBuilder.h"
#include "Director.h"
#include <iostream>
#include <string>
#include <memory>

int main() {
	std::string statement = "{ \"Name\":\"John\", \"Phone\":\"010-xxx-xxxx\", \"E-Mail\":\"john@lge.com\"}";

	std::string nameKey = "Name";
	std::string phoneKey = "Phone";
	std::string emailKey = "E-Mail";

	JSonObjectBuilder builder = JSonObjectBuilder(statement);
	Director* director = new Director();
	director->parse(builder);

	std::shared_ptr<JSon> pJSon = builder.getJSonObject();

	std::cout << pJSon->getStr() << std::endl;
	std::cout << pJSon->getValue(nameKey) << std::endl;
	std::cout << pJSon->getValue(phoneKey) << std::endl;
	std::cout << pJSon->getValue(emailKey) << std::endl;
	delete director;
	return 0;
}
