/*
 * DwellerTypes.h
 *
 *  Created on: 30 lip 2016
 *      Author: Tomek
 */

#ifndef DWELLER_DWSTATISTICS_H_
#define DWELLER_DWSTATISTICS_H_

#include <stdint.h>

class DwStatistics
{
	public:
		enum stat_iter {STR, PER, ENDUR, CHAR, INTE, LUCK, STAT_CNT};
		DwStatistics();
		DwStatistics(const DwStatistics& refObj);
		struct SpecialStat_t{
			uint8_t statTab[STAT_CNT];
			uint8_t modifTab[STAT_CNT];
		};
		SpecialStat_t stats;
	private:


};


#endif /* DWELLER_DWSTATISTICS_H_ */
