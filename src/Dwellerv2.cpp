//============================================================================
// Name        : Dwellerv2.cpp
// Author      : TB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <Dweller.hpp>
#include <string>
#include <iostream>
//#include "boost/test/unit_test.hpp"

using namespace std;

int main() {

	Dweller D1 = Dweller();
	D1.gainExp(250);

	D1.sayHi();
	Dweller D2 = Dweller(D1);
	return 0;
}
