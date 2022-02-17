// 블루투스 통신을 위한 SoftwareSerial 라이브러리
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(5, 4);

byte flag = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  byte signal_num; //시리얼 통신으로 전송받는 값을 저장하는 변수
  if (Serial.available()) {
    signal_num = Serial.read(); 
  
    if(signal_num == 1) {
      digitalWrite(13, HIGH);
      flag = signal_num;
    }
    else if(signal_num == 0) {
      digitalWrite(13, LOW);
      flag = signal_num;
    }
  }
  Serial.write(flag);
  delay(1000);
}
