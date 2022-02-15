void setup() {

  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  if(Serial.available()){

    int val = Serial.read();

    if(val == 1) { //만약 1을 받으면
      digitalWrite(13, HIGH);//turn on
    }
    if(val == 2) { //만약 2을 받으면
      digitalWrite(13, LOW);//turn off
    }
   
  }
}
