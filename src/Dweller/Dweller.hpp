/*
 * Dweller.h
 *
 *  Created on: 28 lip 2016
 *      Author: Tomek
 */

#ifndef DWELLER_DWELLER_HPP_
#define DWELLER_DWELLER_HPP_

#include <DwStatistics.hpp>
#include <DwStatistics.hpp>
#include <string>
#include <stdbool.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


	class Dweller {
	public:
		/* Constructors */
		Dweller();
		Dweller(const Dweller &dwRef);
		/* Destructors */
		virtual ~Dweller();

		Dweller& operator=(const Dweller & dw);

		bool gainExp(int exp);
		bool gainDmg(int dmg);

		uint16_t gelLvl(void);

		void sayHi(void);
		void rename(const std::string &nm, const std::string &snm);

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
		void initStats(void);

	};

#endif /* DWELLER_DWELLER_HPP_ */
