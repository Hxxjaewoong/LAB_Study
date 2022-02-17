import processing.serial.*;
 
Serial port;  // Create object from Serial class2
 
float roll, pitch;
//Variables to draw a continuous line.
int xPos = 1;         // horizontal position of the graph 
int lastxPos=1;
int lastheight=0;
 
void setup() 
{
  size(1000, 250);
  frameRate(30);
  // Open the port that the board is connected to and use the same speed (9600 bps)
  port = new Serial(this, "COM4", 9600); // 115200bps, COM22 시리얼 개방
  port.readStringUntil('\n');
  background(0);
  smooth();
}
 
void draw() 
{
  while (port.available() > 0)
  {  
    //String str = port.readString();
    String str = port.readStringUntil('\n');
    if (str != null)
    {
      str = trim(str);
      int num = int(str);
      println(num);
 
      stroke(255,0,0);     //stroke color
      strokeWeight(2);        //stroke wider
 
      line(lastxPos, lastheight-125, xPos, height - num -125); 
      lastxPos= xPos;
      lastheight= int(height-num);
 
      // at the edge of the window, go back to the beginning:
      if (xPos >= width) {
        xPos = 0;
        lastxPos= 0;
        background(0);  //Clear the screen.
      } else {
        // increment the horizontal position:
        xPos++;
      }
    }
  }
}
