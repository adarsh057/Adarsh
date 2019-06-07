/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald

  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo obje ncts can be created on most boards


void setup() {
  myservo.attach(D2);  // attaches the servo on GIO2 to the servo object
  Serial.begin(9600);
  pinMode(D3,INPUT);
}

void loop() {
  int pos;
  int button=digitalRead(D3);
  if(button==1)

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    Serial.println("clockwise");
        delay(15);                      // waits 15ms for the servo to reach the position
  }
  else
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos) ; // tell servo to go to position in variable 'pos'
    Serial.println("Anti Clock wise");
   
    delay(15);                     // waits 15ms for the servo to reach the position
  }
}
