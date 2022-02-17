import processing.serial.*;
 Serial port;

 void setup() {
 size(256, 150); //아두이노의 analogWrite 명령에서 PWM의 범위가 0-255이기 때문

 println("Available serial ports:");
 println(Serial.list());
 
 /*
 Available serial ports:
COM4
*/

 port = new Serial(this, "COM4", 9600);
 port = new Serial(this, Serial.list()[2], 9600);

 }

 void draw() {
 // draw a gradient from black to white
 for (int i = 0; i < 256; i++) {
 stroke(i);
 line(i, 0, i, 150);
 }

 // write the current X-position of the mouse to the serial port asa single byte
 port.write(mouseX);

 }//End of Processing program
