int red = 10;
int yellow = 9;
int green = 8;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(yellow, 0);
  digitalWrite(red, 1);
  delay(2000);
  
  digitalWrite(red, 0);
  digitalWrite(yellow, 1);
  delay(2000);
  
  digitalWrite(yellow, 0);
  digitalWrite(green, 1);
  delay(2000);
  
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  delay(2000);
  
}