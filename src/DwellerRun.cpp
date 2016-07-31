//============================================================================
// Name        : Dweller.cpp
// Author      : TB
// Version     :
// Copyright   : MIT
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include "Dweller.h"
#include "boost/test/unit_test.hpp"

using namespace std;

int main() {
	Dweller D1 = Dweller();
	D1.gainExp(250);
	D1.initStats();
	D1.sayHi();
	Dweller D2 = Dweller(D1);
	return 0;
}
