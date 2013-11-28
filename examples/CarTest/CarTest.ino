#include <Servo.h>
#include <NewPing.h>
#include <AFMotor.h>
#include <Car.h>

/*  Copyright 2013 Steve Mullarkey
  Licensed under the Apache License, Version 2.0 */


// Rear Servo on Pin 9 (Servo1)
// Front Servo on Pin 10 (Servo2)
// Motor using Motor 1 connector on Motor Shield
// Sonar Trigger using pin 15 (A1)
// Sonar Echo using pin 16 (A2)

Car car(10,9,1,15,16); 

void setup()
{
  Serial.begin(115200);    // Needed for logging
}

void loop()
{
  car.straight();
  car.forward();
  if (car.ping() < 15) {
    car.stop();
    if (car.pingLeft() < car.pingRight()) {
      car.right();
    } else {
      car.left();
    }
    car.back();
    car.pause(1);
  }
}