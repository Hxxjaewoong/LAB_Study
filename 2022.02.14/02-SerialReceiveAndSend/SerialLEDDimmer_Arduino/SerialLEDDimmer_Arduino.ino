// 717006 Seung-Chan Kim
// 00_2_FadingLED 와 01_4_SerialLEDControl의 조합


int ledPin = 9;    // LED connected to digital pin 9
int fadeValue = 128; // 0~255 값
void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Hallym University 20170926");
}

// the loop function runs over and over again forever
void loop() {
  
}

void serialEvent() {
  while (Serial.available()) {
    
    int v = Serial.read(); //Serial.read()는 수신된 데이터를 읽어오는데 사용하며 호출 시 시리얼 버퍼의 첫 번째 바이트만 읽어옵니다. 따라서 시리얼 통신으로 수신된 유효한 데이터가 있을 때까지 반복적으로 Serial.read() 함수를 호출하여 데이터를 읽어옵니다.

    if(v>10 && v <255)
    {
      fadeValue = v;
      analogWrite(ledPin, fadeValue);
      Serial.println((int) fadeValue);
    }
   
    
  }

}
