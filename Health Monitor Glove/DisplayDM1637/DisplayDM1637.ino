
#include <SevenSegmentTM1637.h>

const byte CLK = 10;
const byte DIO = 9;
SevenSegmentTM1637 display(CLK,DIO);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  display.begin();
  display.setBacklight(100);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Good");
  display.print("Good");
  delay(1000);
  display.clear();
  for(int i=0; i<=20; i++)
      {
       Serial.print(i);
       display.print(i);
       delay(200);
      }
      
  display.print("DONE");
  Serial.print("DONE");
  delay(1000);
  display.clear();
  delay(1000);
}