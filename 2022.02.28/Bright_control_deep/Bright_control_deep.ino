void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    int ri = Serial.parseInt(); //정수 그대로 출력되는 것(아스키코드 X)
    analogWrite(11,ri); //시리얼을 통해 컴퓨터와 통신할 수 있음!!
  }
}
