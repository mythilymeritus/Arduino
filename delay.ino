void setup() {
  // This function runs once when the Arduino is powered on or reset
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  // This function runs repeatedly as long as the Arduino is powered on

  Serial.println("delay example: Before delay");

  // Add a delay of 2 seconds (2000 milliseconds)
  delay(2000);

  Serial.println("delay example: After delay");

  // Add another delay of 1 second (1000 milliseconds)
  delay(1000);
}
