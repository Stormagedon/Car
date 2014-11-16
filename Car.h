/*
  Car.h - Library for IWM Rocket Avoidance Robot Car.
  Created by Steve Mullarkey, November 18, 2013.
  
  Copyright 2013 Steve Mullarkey
  Licensed under the Apache License, Version 2.0
*/

#ifndef Car_h
#define Car_h

#include "Arduino.h"
#include "../NewPing/NewPing.h"
#include "../AFMotor/AFMotor.h"

#define MAX_DISTANCE 400 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define SERVO_DELAY  200
#define MOTOR_DELAY  0

#define ANGLE_TURN_LEFT  -45
#define ANGLE_TURN_AHEAD   0
#define ANGLE_TURN_RIGHT  45
#define ANGLE_TURN_OFFSET 80

#define ANGLE_SCAN_LEFT  -45
#define ANGLE_SCAN_AHEAD   0
#define ANGLE_SCAN_RIGHT  45
#define ANGLE_SCAN_OFFSET 90 

enum laserState {
    on,
    off,
    onPing
};

class Car
{
  public:
    Car(int frontServoPin,
        int backServoPin,
        int motorPin,
        int sonarTriggerPin,
        int sonarEchoPin,
        int laserPin);

    void forward();
    void back();
    void stop();

    void test();

    void setMotorSpeed(int theMotorSpeed);
    void pause(float pauseTime);

    void straight();
    void left();
    void right();

    int ping();
    int pingLeft();
    int pingRight();

    void laser(laserState ls);
    void laserOn();
    void laserOff();

    void checkServoMotors();

  private:
    int _frontServoPin;
    int _backServoPin;
	int _motorPin;
    int _sonarTriggerPin;
    int _sonarEchoPin;
    int _laserPin;
    laserState _laserState;

    int _motorSpeed;    

    NewPing _sonar;

    Servo _frontServo;
    Servo _backServo;   
    
    AF_DCMotor _motor; 

};

#endif