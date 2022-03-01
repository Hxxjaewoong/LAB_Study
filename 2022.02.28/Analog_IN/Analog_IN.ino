void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   digitalWrite(13, HIGH); 
   int ar = analogRead(A0);
    
   if(ar>800)
      digitalWrite(13,HIGH);
   else if(ar<700)
      digitalWrite(13,LOW);
   
   Serial.println("analog value : " + (String)ar);
   delay(10); 
}
