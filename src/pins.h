#ifndef PINS_H_
#define PINS_H_

#undef OLED_SDA
#undef OLED_SCL
#undef OLED_RST

#define OLED_SDA	21
#define OLED_SCL	22
#define OLED_RST	16

#define FREQ_SET	433775000	//set freq in Hz 9 digit
#define SF_SET		12		//Spreading Factor
#define CR_SET		5		//Coding Rate
#define BW_SET		125E6		//Bandwith

#ifdef TTGO_T_Beam_V0_7
	#define GPS_RX	15
	#define GPS_TX	12
#endif

#ifdef TTGO_T_Beam_V1_0
	#define GPS_RX	12
	#define GPS_TX	34
#endif

#endif
