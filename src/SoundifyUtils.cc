/*
 * SoundifyUtils.cc
 *
 *  Created on: May 16, 2017
 *      Author: ken
 */

#include <SoundifyUtils.h>
#include "Config.h"

namespace TransferViaSound
{

SoundifyUtils::SoundifyUtils()
{
	// TODO Auto-generated constructor stub

}

SoundifyUtils::~SoundifyUtils()
{
	// TODO Auto-generated destructor stub
}

/** @brief 计算出 num 对应的频率
 * @return freq
 */
int SoundifyUtils::CalcFreq(char value)
{
	return (int)Config::BASE_FREQ + value * Config::FREQ_STEP;
}

/** @brief 计算出频率对应的字符
 *
 */
char SoundifyUtils::CalcData(uint16_t freq)
{
	//return (char)((freq - Config::BASE_FREQ) / Config::FREQ_STEP);
	return (char)((freq - Config::BASE_FREQ + Config::FREQ_STEP / 2) / Config::FREQ_STEP);
}


} /* namespace TransferViaSound */
