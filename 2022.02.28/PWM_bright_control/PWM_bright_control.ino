void setup() {
  pinMode(11, OUTPUT);
      
}

void loop() {
 // digitalWrite(11,HIGH); //digital은 0과 1로만 구성
  for(int i=0; i<2556; i++) {
    analogWrite(11,i); //i가 받아들일 수 있는 매개변수는 0-255까지임  
    delay(100);
  }
      }
