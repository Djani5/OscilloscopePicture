#include "VectorDatasheetExamples.h"
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
//#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= _BV(bit))


int k = 1089;


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

  cbi (TIMSK0, TOIE0);             // disable Timer0

  }
void loop()
{
  int i;
  
  for (i = 0; i < k; i++) {
    plot(pfeL[i], pfeR[i]);
  }
}
