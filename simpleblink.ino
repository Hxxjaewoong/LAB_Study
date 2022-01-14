void setup() {
	Serial.begin(9600); //아두이노가 시리얼 통신을 사용하도록 만듦(송신부 수신부 보드레이트 일치)
	pinMode(13, OUTPUT); 
}

void loop() {
	if(Serial.available()){
		byte b = Serial.read(); // keyboard에서 들어오는 신호 읽어서 실수형 변수 b에 저장
			if(b == '1') digitalWrite(13, HIGH);
			if(b == '0') digitalWrite(13, LOW);
	}
}
