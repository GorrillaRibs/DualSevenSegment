//Derived from - ShiftOut.ino
//New code by Robert Miller
//25-6/01/16

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;
int dataPin2 = 13;

byte charMap[] =  {B01111101, B00110000, B01101101, B01111001, B00110011, B01011011, B01011111, B01110000, B01111111, B01110011};


int numElements = sizeof(charMap);

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(dataPin2, OUTPUT);
}

void loop() {

  for (int q = 0; q < numElements; q++) {
    
  for (int cyu = 0; cyu < numElements; cyu++) {
      
  for (int kek = 0; kek < 50; kek++) {
        
 digitalWrite(dataPin2, HIGH);
 shiftOut(dataPin, clockPin, MSBFIRST, charMap[q]);
 digitalWrite(latchPin, HIGH);
 digitalWrite(latchPin, LOW);
 delay(10);
 digitalWrite(dataPin2, LOW);
 shiftOut(dataPin, clockPin, MSBFIRST, charMap[cyu]);
 digitalWrite(latchPin, HIGH);
 digitalWrite(latchPin, LOW);
 delay(10);
   }
 }
 
}
}
