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
  
  for(int col = 0; col < 8; col  ++){
    lc.setColumn(0, col, B11111111);
    delay(5000);
    lc.setColumn(0, col, B00000000);
  }

}
