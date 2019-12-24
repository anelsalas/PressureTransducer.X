#include "ad7124/ad7124.h"
const  struct ad7124_st_reg AD7124ADCControl = {0x01, 0x0000, 2, 1};
const  struct ad7124_st_reg AD7124Data = 	{0x03, 0x0000, 3, 1}; /* AD7124_Data */
const  struct ad7124_st_reg AD7124IOCon2 = 	{0x04, 0x0000, 2, 1}; /* AD7124_IOCon2 */
const  struct ad7124_st_reg AD7124ID = 	{0x05, 0x02,   1, 2}; /* AD7124_ID */
const  struct ad7124_st_reg AD7124Error = 	{0x06, 0x0000, 3, 2}; /* AD7124_Error */
const  struct ad7124_st_reg AD7124_ErrorEn = 	{0x07, 0x0040, 3, 1}; /* AD7124_Error_En */
const  struct ad7124_st_reg AD7124MclkCount = 	{0x08, 0x00,   1, 2}; /* AD7124_Mclk_Count */
const  struct ad7124_st_reg AD7124Channel_0 = 	{0x09, 0x8001, 2, 1}; /* AD7124_Channel_0 */
const  struct ad7124_st_reg AD7124Channel_1 = 	{0x0A, 0x0001, 2, 1}; /* AD7124_Channel_1 */
const  struct ad7124_st_reg AD7124Channel_2 = 	{0x0B, 0x0001, 2, 1}; /* AD7124_Channel_2 */
const  struct ad7124_st_reg AD7124Channel_3 = 	{0x0C, 0x0001, 2, 1}; /* AD7124_Channel_3 */
const  struct ad7124_st_reg AD7124Channel_4 = 	{0x0D, 0x0001, 2, 1}; /* AD7124_Channel_4 */
const  struct ad7124_st_reg AD7124Channel_5 = 	{0x0E, 0x0001, 2, 1}; /* AD7124_Channel_5 */
   
const  struct ad7124_st_reg AD7124Channel_6 = 	{0x0F, 0x0001, 2, 1}; /* AD7124_Channel_6 */
const  struct ad7124_st_reg AD7124Channel_7 = 	{0x10, 0x0001, 2, 1}; /* AD7124_Channel_7 */
const  struct ad7124_st_reg AD7124Channel_8 = 	{0x11, 0x0001, 2, 1}; /* AD7124_Channel_8 */
const  struct ad7124_st_reg AD7124Channel_9 = 	{0x12, 0x0001, 2, 1}; /* AD7124_Channel_9 */
const  struct ad7124_st_reg AD7124Channel_10 = 	{0x13, 0x0001, 2, 1}; /* AD7124_Channel_10 */
const  struct ad7124_st_reg AD7124Channel_11 = 	{0x14, 0x0001, 2, 1}; /* AD7124_Channel_11 */
const  struct ad7124_st_reg AD7124Channel_12 = 	{0x15, 0x0001, 2, 1}; /* AD7124_Channel_12 */
const  struct ad7124_st_reg AD7124Channel_13 = 	{0x16, 0x0001, 2, 1}; /* AD7124_Channel_13 */
const  struct ad7124_st_reg AD7124Channel_14 = 	{0x17, 0x0001, 2, 1}; /* AD7124_Channel_14 */
const  struct ad7124_st_reg AD7124Channel_15 = 	{0x18, 0x0001, 2, 1}; /* AD7124_Channel_15 */
const  struct ad7124_st_reg AD7124Config_0 = 	{0x19, 0x0860, 2, 1}; /* AD7124_Config_0 */
const  struct ad7124_st_reg AD7124Config_1 = 	{0x1A, 0x0860, 2, 1}; /* AD7124_Config_1 */
const  struct ad7124_st_reg AD7124Config_2 = 	{0x1B, 0x0860, 2, 1}; /* AD7124_Config_2 */


const  struct ad7124_st_reg AD7124Config_3 = 	{0x1C, 0x0860, 2, 1}; /* AD7124_Config_3 */
const  struct ad7124_st_reg AD7124Config_4 = 	{0x1D, 0x0860, 2, 1}; /* AD7124_Config_4 */
const  struct ad7124_st_reg AD7124Config_5 = 	{0x1E, 0x0860, 2, 1}; /* AD7124_Config_5 */
const  struct ad7124_st_reg AD7124Config_6 = 	{0x1F, 0x0860, 2, 1}; /* AD7124_Config_6 */
const  struct ad7124_st_reg AD7124Config_7 = 	{0x20, 0x0860, 2, 1}; /* AD7124_Config_7 */
const  struct ad7124_st_reg AD7124Filter_0 = 	{0x21, 0x060180, 3, 1}; /* AD7124_Filter_0 */
const  struct ad7124_st_reg AD7124Filter_1 = 	{0x22, 0x060180, 3, 1}; /* AD7124_Filter_1 */
const  struct ad7124_st_reg AD7124Filter_2 = 	{0x23, 0x060180, 3, 1}; /* AD7124_Filter_2 */
const  struct ad7124_st_reg AD7124Filter_3 = 	{0x24, 0x060180, 3, 1}; /* AD7124_Filter_3 */
const  struct ad7124_st_reg AD7124Filter_4 = 	{0x25, 0x060180, 3, 1}; /* AD7124_Filter_4 */
const  struct ad7124_st_reg AD7124Filter_5 = {0x26, 0x060180, 3, 1}; /* AD7124_Filter_5 */
const  struct ad7124_st_reg AD7124Filter_6 = 	{0x27, 0x060180, 3, 1}; /* AD7124_Filter_6 */
const  struct ad7124_st_reg AD7124Filter_7 = 	{0x28, 0x060180, 3, 1}; /* AD7124_Filter_7 */
const  struct ad7124_st_reg AD7124Offset_0 = 	{0x29, 0x800000, 3, 1}; /* AD7124_Offset_0 */

struct ad7124_st_reg AD7124Offset_1 = 	{0x2A, 0x800000, 3, 1}; /* AD7124_Offset_1 */

struct ad7124_st_reg AD7124Offset_2 = 	{0x2B, 0x800000, 3, 1}; /* AD7124_Offset_2 */
struct ad7124_st_reg AD7124Offset_3 = 	{0x2C, 0x800000, 3, 1}; /* AD7124_Offset_3 */
struct ad7124_st_reg AD7124Offset_4 = 	{0x2D, 0x800000, 3, 1}; /* AD7124_Offset_4 */
struct ad7124_st_reg AD7124Offset_5 = 	{0x2E, 0x800000, 3, 1}; /* AD7124_Offset_5 */
struct ad7124_st_reg AD7124Offset_6 = 	{0x2F, 0x800000, 3, 1}; /* AD7124_Offset_6 */
struct ad7124_st_reg AD7124Offset_7 = 	{0x30, 0x800000, 3, 1}; /* AD7124_Offset_7 */
struct ad7124_st_reg AD7124Gain_0 = 	{0x31, 0x500000, 3, 1}; /* AD7124_Gain_0 */
struct ad7124_st_reg AD7124Gain_1 = 	{0x32, 0x500000, 3, 1}; /* AD7124_Gain_1 */
struct ad7124_st_reg AD7124Gain_2 = 	{0x33, 0x500000, 3, 1}; /* AD7124_Gain_2 */
struct ad7124_st_reg AD7124Gain_3 = 	{0x34, 0x500000, 3, 1}; /* AD7124_Gain_3 */
struct ad7124_st_reg AD7124Gain_4 = 	{0x35, 0x500000, 3, 1}; /* AD7124_Gain_4 */
struct ad7124_st_reg AD7124Gain_5 = 	{0x36, 0x500000, 3, 1}; /* AD7124_Gain_5 */
struct ad7124_st_reg AD7124Gain_6 = 	{0x37, 0x500000, 3, 1}; /* AD7124_Gain_6 */
struct ad7124_st_reg AD7124Gain_7 = 	{0x38, 0x500000, 3, 1}; /* AD7124_Gain_7 */
