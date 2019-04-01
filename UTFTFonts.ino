#include <utft.h>
// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[]; // Set the pins to the correct ones for your development shield
// ------------------------------------------------------------
// Arduino Uno / 2009:
// -------------------
// Standard Arduino Uno/2009 shield            : <display model="">,A5,A4,A3,A2
// DisplayModule Arduino Uno TFT shield        : <display model="">,A5,A4,A3,A2
//
// Arduino Mega:
// -------------------
// Standard Arduino Mega/Due shield            : <display model="">,38,39,40,41
// CTE TFT LCD/SD Shield for Arduino Mega      : <display model="">,38,39,40,41
//
// Remember to change the model parameter to suit your display module!
UTFT myGLCD(ITDB32S,38,39,40,41);</display></display></display></display></p><p>void setup()
{
  myGLCD.InitLCD();</p><p>  myGLCD.clrScr();
}</p><p>void loop()
{
  myGLCD.setColor(0, 255, 0);
  myGLCD.setBackColor(0, 0, 0);</p><p>  myGLCD.setFont(BigFont);
  myGLCD.print(" !\"#$%&'()*+,-./", CENTER, 0);
  myGLCD.print("0123456789:;<=>?", CENTER, 16);
  myGLCD.print("@ABCDEFGHIJKLMNO", CENTER, 32);
  myGLCD.print("PQRSTUVWXYZ[\\]^_", CENTER, 48);
  myGLCD.print("`abcdefghijklmno", CENTER, 64);
  myGLCD.print("pqrstuvwxyz{|}~ ", CENTER, 80);</p><p>  myGLCD.setFont(SmallFont);
  myGLCD.print(" !\"#$%&'()*+,-./0123456789:;<=>?", CENTER, 120);
  myGLCD.print("@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_", CENTER, 132);
  myGLCD.print("`abcdefghijklmnopqrstuvwxyz{|}~ ", CENTER, 144);</p><p>  myGLCD.setFont(SevenSegNumFont);
  myGLCD.print("0123456789", CENTER, 190);</p><p>  while(1) {};
}