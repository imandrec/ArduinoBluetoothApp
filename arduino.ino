#include <SoftwareSerial.h>

//from bluetooth RX to 9 && TX to 8

// Create a new serial communication port to connect to HC06
SoftwareSerial bluetoothSerial(8,9); // RX, TX

void setup() {
  // Initialize the serial communication with the computer
  Serial.begin(9600);

  // Initialize the serial communication with the HC06 module
  bluetoothSerial.begin(9600);
}

void loop() {
  // Check if data is available to read from the HC06 module
  if (bluetoothSerial.available()) {
    // Read the data from the HC06 module
    char c = bluetoothSerial.read();

    // Print the data to the serial monitor
    Serial.print(c);
  }
}
