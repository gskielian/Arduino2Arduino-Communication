char byteReceived = 0;   // expecting a character input

void setup() {
        Serial.begin(9600);
}

void loop() {
        if (Serial.available() > 0) {
                // read the received byte
                byteReceived = Serial.read();

                // print to serial monitor
                Serial.print("received:"); Serial.println(byteReceived);
        }
}
 
