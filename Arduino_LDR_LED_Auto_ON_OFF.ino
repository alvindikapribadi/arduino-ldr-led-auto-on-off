/*
  ============================================
  Project Title : Arduino LDR LED Auto ON OFF
  ============================================

  Description:
  This project uses an LDR (Light Dependent Resistor)
  to automatically turn an LED ON when it is dark
  and turn it OFF when it is bright.

  Components:
  - Arduino Uno
  - LDR (Light Dependent Resistor)
  - 33K Resistor (for voltage divider)
  - LED
  - 220 Ohm Resistor (for LED)
  - Breadboard
  - Jumper Wires

  Wiring:
  LDR Voltage Divider:
    - One leg of LDR -> 5V
    - Other leg of LDR -> A0
    - 33K resistor from A0 -> GND

  LED:
    - LED Anode (+) -> Pin 8 (through 220Ω resistor)
    - LED Cathode (-) -> GND

  Note:
  Adjust the threshold value if needed
  depending on your room lighting condition.
*/

const int ldrPin = A0;
const int ledPin = 8;

int ldrValue = 0;
int threshold = 500;   // Adjust this value if needed

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  ldrValue = analogRead(ldrPin);
  // Serial.println(ldrValue);

  // If dark (value higher than threshold) -> LED ON
  if (ldrValue > threshold) {
    digitalWrite(ledPin, LOW);
  } 
  else {
    digitalWrite(ledPin, HIGH);
  }

  delay(200);
}
