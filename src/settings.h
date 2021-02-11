
#ifndef SETTINGS_H_
#define SETTINGS_H_

#define CALL "OE5BPA-7"
#define BEACON_MESSAGE "LoRa APRS SB Tracker test"
#define BEACON_TIMEOUT 1    // Beacon interval in Minutes. Will be overwritten by SB_ACTIVE
#define SYMBOL_CODE ">"
#define SYMBOL_OVERLAY "/"

// FREQ and MODE SETTING de YC1HVZ
#define FREQ_SET	433775E3  //set freq. E3 is MHz
#define SF_SET		12			  //Spreading Factor
#define CR_SET		5			    //Coding Rate
#define BW_SET		125E3		  //Bandwith setting. E3 is khz

// SMART BEACONING PARAMETERS   - 2020-11-22 DJ1AN
#define SB_ACTIVE                // uncomment to enable Smart Beaconing
#define SB_TURN_MIN 25           // enter turn angle for smart direction depending beaconing (default=20)
#define SB_SLOW_RATE 300         // slow speed TX rate in s
#define SB_SLOW_SPEED 10         // slow speed in km/h
#define SB_FAST_RATE 60          // high speed TX rate in s
#define SB_FAST_SPEED 100        // fast speed in km/h
#define SB_MIN_TX_DIST 100       // minimum Distance between tx in m
#define SB_MIN_BCN 5             // minimum SB rate in s

//#define DEBUGMODE                // uncomment to activate Debug Mode. Gets GPS Data over Serial.
#endif
