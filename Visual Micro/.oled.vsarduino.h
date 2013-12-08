/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Uno, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328P__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

void drawPixel( int x, int y, bool draw );
void drawChar( int x, int y, unsigned char character );
void drawString( int x, int y, unsigned char * string );
void swap(int16_t &r, int16_t &s);
void drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1);
//
//
void sendcommand(unsigned char com);
void clear_display(void);
void SendChar(unsigned char data);
void setXY(unsigned char row,unsigned char col);
void init_OLED(void);
void  i2c_OLED_init(void);
void i2c_init(void);
void i2c_rep_start(uint8_t address);
void i2c_stop(void);
void i2c_write(uint8_t data );
void waitTransmissionI2C();
void i2c_writeReg(uint8_t add, uint8_t reg, uint8_t val);
void i2c_OLED_send_cmd(uint8_t command);
void i2c_OLED_send_byte(uint8_t val);

#include "E:\arduino\hardware\arduino\variants\standard\pins_arduino.h" 
#include "E:\arduino\hardware\arduino\cores\arduino\arduino.h"
#include "E:\Dropbox\Dropbox\Paintball\Custom Board\Code\oled\oled.ino"
#include "E:\Dropbox\Dropbox\Paintball\Custom Board\Code\oled\config.h"
#include "E:\Dropbox\Dropbox\Paintball\Custom Board\Code\oled\data.c"
#include "E:\Dropbox\Dropbox\Paintball\Custom Board\Code\oled\font.c"
