#include <Servo.h>
Servo servoLeft;
Servo servoRight;
Servo servoTop;
void setup()
{
 servoLeft.attach(9);
 servoRight.attach(11);
 servoTop.attach(12);
 randomSeed(analogRead(0));
}
void straight()
  {servoLeft.write(180);
  servoRight.write(0);
  delay(2200);
  servoLeft.write(90);
  servoRight.write(90);
  delay(500);}
void right(){
  servoLeft.write(180);
  servoRight.write(180);
  delay(775);
  servoLeft.write(90);
  servoRight.write(90);
  delay(500);
}
void left(){
  servoLeft.write(0);
  servoRight.write(0);
  delay(775);
  servoLeft.write(90);
  servoRight.write(90);
  delay(500);
}
void backup(){
  servoLeft.write(0);
  servoRight.write(180);
  delay(400);
  servoLeft.write(90);
  servoRight.write(90);
  delay(500);
 
}
void loop()
{
 int num = random(5);
 if (analogRead(A7)>= 300){
  servoTop.write(180);
  delay(1000);
 }
 if (num >= 3) {
  straight();
 }
 else if (num = 2) {
 right();
 }
 else if (num = 1){
 backup();
 }
 else {
 right();
 }
 }
