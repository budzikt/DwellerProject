/*
 * DwEquipment.h
 *
 *  Created on: 31 lip 2016
 *      Author: Tomek
 */

#ifndef DWELLER_DWEQUIPMENT_HPP_
#define DWELLER_DWEQUIPMENT_HPP_

#include <DwStatistics.hpp>
#include <string>

class DwEquipment {
public:
	enum eq_type {NORMAL, RARE, LEGENDARY};
	DwEquipment();
	virtual ~DwEquipment();
private:
	std::string *gearName;
	std::string *gearPrefix;
	DwStatistics *stats;
	uint8_t condition;
	DwEquipment::eq_type eqiup_type;
};

#endif /* DWELLER_DWEQUIPMENT_HPP_ */
