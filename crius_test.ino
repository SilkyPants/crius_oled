//==========================================================//
//-------------------------WWW.WIDE.HK----------------------//
//-----i2c OLED example-------------------------------------//
//-----Function : show 128x64 Graphic , Word and animation--//
//-----SCL = A5  ,  SDA = A4 , VCC = 3.3V-5V , GND----------//
//==========================================================//

#include "i2c.h"

#include "crius_oled.h"

//---------------FONT + GRAPHIC-----------------------------//
//==========================================================//

unsigned char fill_string1[]="PUMP";
unsigned char fill_string2[]="(";
unsigned char fill_string3[]="@ SELECT FIRE MODE\n  SELECT BPS\n  TRAINING MODE\n  SHOW STATISTICS\n  SET GAME TIMER\n  SET GAME ALARM";
unsigned char fill_string4[]="\"\"\"\"\"\"\"";

bool firstRun = true;

//==========================================================//
/*void print_a_char(unsigned char ascii=0)
 {
 unsigned char i=0;
 for(i=0;i<8;i++)
 {
 SendChar(myFont[ascii-0x20][i]);
 }
 }*/



//==========================================================//
void setup()
{

  //  Wire.begin();
  i2c_init();

  pinMode( 2, OUTPUT );
  delay( 1000 );
  digitalWrite( 2, HIGH );
  init_OLED();
  //delay(10);
  clear_display();
  //delay(50);
  
  drawString( 52, 5, fill_string1 );
  drawString( 6, 5, fill_string2 );
  drawString( 3, 20, fill_string3 );
}

//==========================================================//
void loop()
{  

  //sendcommand(0xa6);  //Set Normal Display

  //sendcommand(0x20);            //Set Memory Addressing Mode
  //sendcommand(0x01);            //Set Memory Addressing Mode ab Horizontal addressing mode


  //==========================================================//
  //setXY(0,0);
  /*for(int i=0;i<16;i++)     // show 128* 64 picture
   {
   for( int col = 0; col < 64; col++ )
   {
   SendChar(buffer[i][col]);
   }
   }*/


  /*for( int col = 0; col < 64*16; col++ )
  {
    SendChar(buffer[col]);
  }*/

  displayBuffer();

  //==========================================================//
  delay(2000);
}


