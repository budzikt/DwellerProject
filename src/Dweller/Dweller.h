/*
 * Dweller.h
 *
 *  Created on: 28 lip 2016
 *      Author: Tomek
 */

#ifndef DWELLER_DWELLER_H_
#define DWELLER_DWELLER_H_

#include <DwStatistics.h>
#include <string>
#include <stdbool.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "DwStatistics.h"

	class Dweller {
	public:

		Dweller();
		Dweller(std::string const &n, std::string const &sn, int lvl = 1);
		Dweller(const Dweller &dwRef);

		virtual ~Dweller();

		bool gainExp(int exp);
		bool gainDmg(int dmg);
		uint16_t gelLvl(void);
		Dweller& operator=(const Dweller & dw);
		void sayHi(void);
		void initStats(void);

	private:
		enum DWELLER_TYPE  {NORM, SPEC, LEGEND};
		static uint16_t * lvlExpVal;
		uint16_t lvl;
		uint16_t hp;
		long exp;
		std::string *name;
		std::string *surname;
		DWELLER_TYPE dw_type;
		DwStatistics *stat;


		bool gainLvl(void);
		int processDmg(int dmgInput);



	};

#endif /* DWELLER_DWELLER_H_ */
