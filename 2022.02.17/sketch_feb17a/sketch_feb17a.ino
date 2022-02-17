int ledPin = 9;    // LED connected to digital pin 9
int fadeValue = 128; // 0~255 값

void setup() {
  // initialize serial:
  Serial.begin(9600);
}

void loop() {
}

void serialEvent() {
  while (Serial.available()) {
    
    int v = Serial.read();

    if(v == 1)
    {
      fadeValue = v;
      analogWrite(ledPin, fadeValue);
      Serial.println((int) fadeValue);
    }
    if(v == 0)
    {
      fadeValue = v;
      analogWrite(ledPin, fadeValue);
      Serial.println((int) fadeValue);
    }
    }    
  }
