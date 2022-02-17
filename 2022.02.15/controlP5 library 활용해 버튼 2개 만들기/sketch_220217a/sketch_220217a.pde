import controlP5.*; //스케치에서 내부 라이브러리로 들어가서 설치가능
import processing.serial.*; //library
Serial port;
ControlP5 cp5; //create ControlP5 object
PFont font;

void setup() {
  size(300, 300);
  port = new Serial(this, "COM4", 9600); //포트는 아두이노에서 확인 가능
  cp5 = new ControlP5(this);
  font = createFont("Georgia Bold", 20);//버튼과 타이틀을 위한 폰트
  
  cp5.addButton("ON")
    .setPosition(95,50) //x y 좌표 
    .setSize(120, 70)
    .setFont(font)
    .setColorBackground(color(255,0,0)) //배경색 rgb 
    .setColorForeground(color(0,255,0))//마우스 올렸을 때 색
    .setColorLabel(color(0,0,0))//텍스트 색깔
    ;
    /*도구에서 색상 선택 탭에 들어가면 색상 rgb확인 가능*/
  
  cp5.addButton("OFF")
    .setPosition(95,150) //x y 좌표 
    .setSize(120, 70)
    .setFont(font)
    .setColorBackground(color(255,0,0)) //배경색 rgb 
    .setColorForeground(color(0,255,0))//마우스 올렸을 때 색
    .setColorLabel(color(0,0,0))//텍스트 색깔
    ;
}

void draw() {
  
  background(0,0,0);  
}

void ON() {
  port.write(1);
} //버튼을 눌렀을 때 호출되는 함수 (켜지는 것)

void OFF() {
  port.write(2);
}
