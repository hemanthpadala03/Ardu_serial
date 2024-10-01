void setup() {
 Serial.begin(9600); // Start serial communication at 9600 baud rate
 pinMode(13, OUTPUT); // Set pin 13 as output for the LED
}

void loop() {
 if (Serial.available() > 0) { // Check if data is available to read
    String data = Serial.readStringUntil('\n'); // Read the incoming data until newline
    Serial.print("Received: ");
    Serial.println(data); // Print the received data
    if(data == "H"){ // Corrected comparison operator
      digitalWrite(13, HIGH);
      delay(2000);
      digitalWrite(13, LOW);
      delay(2000);
      digitalWrite(13, HIGH);
      delay(2000);
      digitalWrite(13, LOW);
      delay(2000);
    }
 }
}
