import processing.serial.*;
Serial port;

boolean btn1 = false;
boolean btn2 = false;

int x1 = 250; // top left corner x position
int y1 = 450; // top left corner y position
int w1 = 50;
int h1 = 50;

int x2 = 450; // top left corner x position
int y2 = 450; // top left corner y position
int w2 = 50;
int h2 = 50;

int prevX = 10;  //  previous x pos
int prevY = 300; //  previous y pos 

int curX = 10;    // cur x pos
int curY = 300;   // cur y pos
int data = 0;     // value 

int signal_num;

void setup() {
  size(800,600);
  background(255);
  stroke(0);
  
  for(int i=0; i<Serial.list().length; i++){
    println("Available serial ports:", i, "-->", Serial.list()[i]);
  }
  
  port = new Serial(this, Serial.list()[2], 9600);
  
  line(prevX, prevY, curX, curY);
}

void draw() {
  fill(175);
  textSize(30);
  text("ON", x1, y1); 
  text("OFF", x2, y2); 
  rect(x1,y1,w1,h1);
  rect(x2,y2,w2,h2);
  
  if (port.available() > 0) {
    signal_num = port.read();
    
    println(signal_num);
  }
  
  if (signal_num == 1)       data = 100; 
  else if (signal_num == 0)  data = 300;
  
  curX += 1;    //  move curX like time
  curY = data;  //  set data
  
  line(prevX, prevY, curX, curY);
  
  if (curX >= width) {
    curX = 0;
    prevX = 0;
    prevY = 300; //  save curY
    background(255);
  } else {
    prevX = curX; //  save curX
    prevY = curY; //  save curY
  }
}

void mousePressed() {
  if (mouseX > x1 && mouseX < x1+w1 && mouseY > y1 && mouseY < y1+h1) {
    btn1 = !btn1;
  }  
  if (mouseX > x2 && mouseX < x2+w2 && mouseY > y2&& mouseY < y2+h2) {
    btn2 = !btn2;
  } 
  
  if (btn1 == true) {
     port.write(1);
     //println("btn1 true --> 1");
     btn1 = false;
  } 
  else if (btn2 == true) {
     port.write(0);
     //println("btn2 true --> 0");
     btn2 = false;
  }
}
