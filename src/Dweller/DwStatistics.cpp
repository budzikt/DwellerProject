/*
 * DwStatistics.cpp
 *
 *  Created on: 31 lip 2016
 *      Author: Tomek
 */

#include "DwStatistics.h"

DwStatistics::DwStatistics() {
	for(int i=0; i< STAT_CNT; i++)
	{
		stats.statTab[i] = 0;
		stats.modifTab[i] = 0;
	}
}

DwStatistics::DwStatistics(const DwStatistics& refObj) {
	for(int i=0; i< STAT_CNT; i++)
	{
		stats.statTab[i] = refObj.stats.statTab[i];
		stats.modifTab[i] = refObj.stats.modifTab[i];
	}
}
