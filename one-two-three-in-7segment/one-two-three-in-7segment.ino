int segments[] = {2, 3, 4, 5, 6, 7, 8};


void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<7; i++){
    pinMode(segments[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  displaySegment(1, 0, 0, 1, 1, 1, 1);
  delay(5000);

  displaySegment(0, 0, 1, 0, 0, 1, 0);
  delay(5000);
  
  displaySegment(0, 0, 0, 0, 1, 1, 0);
  delay(5000);
}

void displaySegment(int a, int b, int c, int d, int e, int f, int g) {
	int segmentState[] = {a, b, c, d, e, f, g};

  for(int i=0; i<7; i++){
    digitalWrite(segments[i], segmentState[i]);
  }
}
