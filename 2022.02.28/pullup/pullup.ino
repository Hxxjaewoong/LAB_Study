void setup() {
  pinMode(11, OUTPUT);
      
}

void loop() {
 // digitalWrite(11,HIGH); //digital은 0과 1로만 구성
  for(int i=0; i<255; i++) {
    analogWrite(11,i);
    delay(100);
  }
      }
