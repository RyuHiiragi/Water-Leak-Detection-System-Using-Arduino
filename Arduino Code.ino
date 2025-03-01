// Define pins
const int moisturePin = A0;
const int buzzerPin = 8;
const int redLEDPin = 7;
const int greenLEDPin = 6;

// Moisture threshold (adjust based on calibration)
const int leakThreshold = 500;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set pin modes
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
}

void loop() {
  // Read moisture sensor
  int moistureValue = analogRead(moisturePin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureValue);

  // Check for leaks
  if (moistureValue > leakThreshold) {
    digitalWrite(redLEDPin, HIGH);   // Red LED on
    digitalWrite(greenLEDPin, LOW);  // Green LED off
    digitalWrite(buzzerPin, HIGH);   // Buzzer on
  } else {
    digitalWrite(redLEDPin, LOW);    // Red LED off
    digitalWrite(greenLEDPin, HIGH); // Green LED on
    digitalWrite(buzzerPin, LOW);    // Buzzer off
  }

  delay(1000); // Check every second
}
