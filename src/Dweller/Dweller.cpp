/*
 * Dweller.cpp
 *
 *  Created on: 28 lip 2016
 *      Author: Tomek
 */

#include <Dweller.hpp>

using namespace std;

const int maxLvl = 5;
const uint16_t maxHp = 500;
const uint8_t SpecStatNum = 7;
uint16_t lvlTableNormal[maxLvl] = {200, 500, 1200, 2000, 2300};

uint16_t * Dweller::lvlExpVal = &lvlTableNormal[0];

Dweller::Dweller() {
	exp = 0;
	hp = 100;
	lvl = 1;
	name = new string("Default Name");
	surname = new string("Default SurName");
	dw_type = NORM;
	stat = new DwStatistics();
	initStats();
}

Dweller::~Dweller() {
	delete  this->name;
	delete  this->surname;
}

bool Dweller::gainExp(int exp) {
	this->exp += exp;
	int lvlLimit = Dweller::lvlExpVal[(this->gelLvl())-1];
	if(this->exp > lvlLimit)
	{
		this->gainLvl();
		return true;
	}
	else{return false;}
}

uint16_t Dweller::gelLvl(void) {
	return this->lvl;
}

Dweller& Dweller::operator =(const Dweller& dw) {
	delete this->name;
	delete this->surname;
	delete this->stat;

	this->name = new string(*dw.name);
	this->surname = new string(*dw.surname);
	this->stat = new DwStatistics(*dw.stat);
}

void Dweller::sayHi(void) {
	std::cout << *(this->name) << " " <<  *(this->surname) << endl;
}

bool Dweller::gainLvl(void) {
	if(this->lvl+1 <= maxLvl){
		this->lvl++;
		return true;
	}
	else{return false;}
}

void Dweller::initStats(void) {
	int initSeed;
	switch (this->dw_type)
	{
		case NORM:{
			initSeed = 2;
			break;
		}
		case SPEC:{
			initSeed = 4;
			break;
		}
		case LEGEND:{
			initSeed = 6;
			break;
		}
	}
	srand (time(NULL));
	for (int i=0; i < DwStatistics::STAT_CNT; i++)
	{
		stat->stats.statTab[i] = (rand()%initSeed + 1);
	}
}

Dweller::Dweller(const Dweller& dwRef) {
	this->name = new string(*dwRef.name);
	this->surname = new string(*dwRef.surname);
	this->stat = new DwStatistics(*dwRef.stat);
}

void Dweller::rename(const std::string& nm, const std::string& snm) {
	delete name;
	delete surname;
	name = new string(nm);
	surname = new string(snm);
}
