#include <Wire.h>

byte x = 0; // byte to send


void setup() {
  Wire.begin(); //join the I2C bus
}


void loop() {
  Wire.beginTransmission(8); // transmit to peripheral device
  Wire.write("x is ");        // sends five bytes
  Wire.write(x);              // sends a byte
  Wire.endTransmission();    // ends our message

  x++; //increment our byte
  delay(500);
}
