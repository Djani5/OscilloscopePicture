// #include "VectorDatasheetExamples.h"
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))

void plot(byte x, byte y)
{
  for(int i = 0; i <= 8; i++)
  {
    digitalWrite(22+i, (x >> i) & 1);
    digitalWrite(30+i, (x >> i) & 1);
    }
}

void setup() {
  for(int i = 22; i <= 37; i++)
    pinMode(i, OUTPUT);

  // disable interrupts to avoid timing distortion
  cbi (TIMSK0, TOIE0);             // disable Timer0 !!! delay() is now not available
  //sbi (TIMSK2,TOIE2);              // enable Timer2 Interrupt

}
void loop()
{
  int i;
  
  for (i = 0; i < 256; i++) {
    plot(i, i);
  }

}
