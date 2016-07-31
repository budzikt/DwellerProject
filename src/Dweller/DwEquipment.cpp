/*
 * DwEquipment.cpp
 *
 *  Created on: 31 lip 2016
 *      Author: Tomek
 */

#include <DwEquipment.hpp>

DwEquipment::DwEquipment() {
	gearName = new std::string("Default Gear");
	gearPrefix = new std::string();
	stats = new DwStatistics();
	condition = 100;
	eqiup_type = DwEquipment::NORMAL;
}

DwEquipment::~DwEquipment() {
	// TODO Auto-generated destructor stub
}

