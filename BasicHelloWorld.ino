#include <utft.h>  // Declare which fonts we will be using
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
// Remember to change the model parameter to suit your display module!
UTFT myGLCD(ITDB28, A5, A4, A3, A2);
void setup()
{
myGLCD.InitLCD();
myGLCD.clrScr();
myGLCD.setFont(BigFont);
}
void loop()
{
myGLCD.setColor(0, 255, 0); //green
myGLCD.print("HELLO WORLD", 45, 100);
while (true) {};
}
