#include <Wire.h>

void setup() {
  Wire.begin(2);                // join i2c bus as address '2'
  Wire.onReceive(onReceiveEvent); // tie-in our callback function
  Serial.begin(9600);           // begin serial for monitoring
}

void loop() {
  delay(100);
}


//callback function
void onReceiveEvent() {
  char c;
  
  while (1 < Wire.available()) { 
  // loop through all but last, printing as characters
  // save the last byte, to print as integer
    c = Wire.read(); // receive byte as a char
    Serial.print(c);         // print char
  }
  int x = Wire.read();    // receive last byte as an integer
  Serial.println(x);         // print the integer
}
