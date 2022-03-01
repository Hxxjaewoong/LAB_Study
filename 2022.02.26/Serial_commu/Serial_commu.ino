void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  }

void loop(){
  if(Serial.available())
  {
    int swt =(int)Serial.read(); //아두이노에서 컴퓨터로 보내는 값
    if(swt == 49) //아스키 코드 1 은 49
      {
        digitalWrite(13,1);
        delay(1000);
      }
    else
      {
        digitalWrite(13,0);
        delay(1000);
      }
  } //예를 들어 13을 보내면 깜빡임
}

//시리얼은 바이트 단위로 통신
