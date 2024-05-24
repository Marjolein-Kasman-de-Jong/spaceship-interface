int switchState = 0;

void setup() {
  // Green LED
  pinMode(3, OUTPUT);
  // Red LEDs
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  // Switch
  pinMode(2, INPUT);
}

void loop() {
  // Get switch position
  switchState = digitalRead(2);

  // If switch is not pressed
  if (switchState == LOW) {
    // Turn green LED on
    digitalWrite(3, HIGH);
    // Turn red LEDs off 
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
    
  // If switch is pressed
  else {
    // Turn green LED off 
    digitalWrite(3, LOW);
    // Let red LEDs blink
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);    
  }
}
