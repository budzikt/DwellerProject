/*
 * DwellerTypes.h
 *
 *  Created on: 30 lip 2016
 *      Author: Tomek
 */

#ifndef DWELLER_DWSTATISTICS_HPP_
#define DWELLER_DWSTATISTICS_HPP_

#include <stdint.h>

class DwStatistics
{
	public:
		enum stat_iter {STR, PER, ENDUR, CHAR, INTE, LUCK, STAT_CNT};

		DwStatistics();
		DwStatistics(const DwStatistics& refObj);

		uint8_t getStat(DwStatistics::stat_iter);

		struct SpecialStat_t{
			uint8_t statTab[STAT_CNT];
		};

		SpecialStat_t stats;
	private:


};


#endif /* DWELLER_DWSTATISTICS_HPP_ */
