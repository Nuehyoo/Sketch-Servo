#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  Serial.begin(9600);
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop() {
  int val; //Creating a variable val

  while (Serial.available() > 0) {
    val = Serial.parseInt();
    if(val != 0 ){
      Serial.println(val);
      myservo.write(val);
    }
    delay(5);
  }
}