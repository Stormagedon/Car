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
// Laser on pin 19 (A5)

Car car(10,9,1,15,16,19);     // Create a car object

void setup()
{
  Serial.begin(115200);       // Needed for logging
  car.laser(onPing);          // Turn laser on while pinging 
}

void loop()
{
  car.straight();             // Steer straight ahead
  car.forward();              // Turn drive motor on and go forward
  if (car.ping() < 15) {      // if forward distance less than 15 cm
    car.stop();               // - stop moving
    if (car.pingLeft() < car.pingRight()) {   // where is the most space?
      car.right();            // - steer to the right
    } else {
      car.left();             // - steer to the left
    }
    car.back();               // back up
    car.pause(1);             // - for one second
  }
}