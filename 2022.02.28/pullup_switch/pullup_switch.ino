void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT_PULLUP); //스위치를 쉽게 구성하기 위해서 인풋 풀업 모드로 구성 
  
}

void loop() {
  int sw = digitalRead(13); //digitalRead를 통해 13번에서 오는 값이 무엇인지 알아내는 것
  Serial.println(sw); 
  delay(300);
}

/*스위치를 누르지 않았을 때의 값은 1
  스위치를 눌렀을 때의 값은 0
 */
