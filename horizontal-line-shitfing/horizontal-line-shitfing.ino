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
  
  for(int row = 0; row < 8; row  ++){
    lc.setRow(0, row, B11111111);
    delay(5000);
    lc.setRow(0, row, B00000000);
  }

}
