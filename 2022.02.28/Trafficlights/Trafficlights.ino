int time = 1000;

void setup() {
 /* for(int i=9; i<13; i++){
    pinMode(i, OUTPUT);
  }*/
    Serial.begin(9600);
    
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);

}

void loop() {
  int sw = digitalRead(13);
  
  if(sw == 1) {
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    }
    
   else if(sw == 0) {
      digitalWrite(8, LOW);
      digitalWrite(9, HIGH);
      delay(time);
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      delay(time*3);
      for(int i=0; i<5; i++){
        digitalWrite(11, LOW);
        delay(time/2);
        digitalWrite(11,HIGH);
        delay(time/2);
      }  
    }
    Serial.println(sw);
}



// for(int i=8; i<13; i++) digitalWrite(i, LOW);
