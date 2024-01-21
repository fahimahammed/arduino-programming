#include <LedControl.h>

int DIN = 11;
int CS = 10;
int CLK = 13;

LedControl lc = LedControl(DIN, CLK, CS, 1);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 15);
  lc.clearDisplay(0);
}

void loop(){
  byte letterE[] = {
    B11111111,
    B00000001,
    B00000001,
    B00111111,
    B00000001,
    B00000001,
    B00000001,
    B11111111
  };
  displayPattern(letterE);
  delay(5000);

  byte letterF[] = {
    B11111111,
    B00000001,
    B00000001,
    B00111111,
    B00000001,
    B00000001,
    B00000001,
    B00000001
  };
  displayPattern(letterF);
  delay(5000);

  byte letterH[] = {
    B10000001,
    B10000001,
    B10000001,
    B11111111,
    B10000001,
    B10000001,
    B10000001,
    B10000001
  };
  displayPattern(letterH);
  delay(5000);

}

void displayPattern(byte pattern[]){
  for(int row = 0; row < 8; row++){
    lc.setRow(0, row, pattern[row]);
  }
}