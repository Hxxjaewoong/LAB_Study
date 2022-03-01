int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;

int time = 1000; //변수로 시간 조절

void setup() {

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);

/*  for(int i=13; i>8; i--) //반복문 사용해보기
  {
    pinMode(i,OUTPUT);  
  }
*/  
}

void loop() { //반복문 사용하지 않기
  digitalWrite(led1, HIGH);   
  delay(time);
  digitalWrite(led2, HIGH);   
  delay(time);
  digitalWrite(led3, HIGH);   
  delay(time);
  digitalWrite(led4, HIGH);   
  delay(time);
  digitalWrite(led5, HIGH);   
  delay(time*3);            
  digitalWrite(led1, LOW);               
  digitalWrite(led2, LOW);               
  digitalWrite(led3, LOW);                
  digitalWrite(led4, LOW);            
  digitalWrite(led5, LOW);    
  delay(time);                      
}
