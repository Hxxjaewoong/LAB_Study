const int ledPin = 9;    // LED 설치 데이터 핀 번호

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  byte brightness;

  if (Serial.available()) { // 프로세싱의 시리얼 출력 여부 확인
    brightness = Serial.read(); // 프로세싱의 시리얼 출력 결과물 확인
    analogWrite(ledPin, brightness);// 밝기 지정에 따른  LED on
  }
}//프로그램 끝
