#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins - NO PWM)
#define CLK 3
#define DIO 4

TM1637Display display(CLK, DIO);

void setup()
{
}

void loop()
{
  display.setBrightness(0x0f);
  uint8_t data[] = { 0x0, 0x0, 0x0, 0x0 };

  display.setSegments(data);
  for(int i=0; i<=1000; i++)
  {
    display.showNumberDec(i);
  }

}
