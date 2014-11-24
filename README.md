Car
===

Arduino library for IWM Rocket car mobile robot.

The intent of this library is to make it a lot simpler to program the IWM Rocket Car.

Rather than have to write code against the AF_MOTOR, NewPing and Servo libraries, this library provides a higher level of abstraction.

To use just place in Arduino/Libraries, restart the Arduino IDE and you will see a new example (File->Examples) called Car. This will let you create the example called CarTest.

NB Ensure that the Servo, NewPing and AFMotor class are already imported and in your Arduino/Libraries directory.

AF_Motor can be found here : http://learn.adafruit.com/adafruit-motor-shield/library-install

NewPing can be found here : https://code.google.com/p/arduino-new-ping/

Servo is included with the Arduino IDE.

See the sample Sketch in the examples directory for details on how to use it.
```html
<h3>Car constructor parameters</h3>
<table border="1">
	<tr>
		<td>Parameter</td><td>Type</td><td>Name</td><td>Notes</td>
	</tr>
	<tr>
		<td>1</td><td>Int</td><td>frontServoPin</td><td> </td>
	</tr>
	<tr>
		<td>1</td><td>Int</td><td>backServoPin</td><td> </td>
	</tr>
	<tr>
		<td>1</td><td>Int</td><td>motorPin</td><td> </td>
	</tr>
	<tr>
		<td>1</td><td>Int</td><td>sonarTriggerPin</td><td> </td>
	</tr>
	<tr>
		<td>1</td><td>Int</td><td>laserPin</td><td>This can also be an LED</td>
	</tr>
</table>	

<h3>Car Methods</h3>
<table border="1">
	<tr>
		<td>Method</td><td>Description</td>
	</tr>
	<tr><td>void forward()</td><td>Turn drive motor on.</td><tr>
    <tr><td>void back()</td><td>Turn drive motor on reverse.</td></tr>
    <tr><td>void stop()</td><td>Turn drive motor off.</td></tr>

    <tr></tr>

    <tr><td>void straight()</td><td>Move steering straight.</td></tr>
    <tr><td>void left()</td><td>Steer left.</td></tr>
    <tr><td>void right()</td><td>Steer right.</td></tr>

    <tr></tr>

    <tr><td>int ping()</td><td>Get distance to object in front, in cm.</td></tr>
    <tr><td>int pingLeft()</td><td>Get distance to object to left.</td></tr>
    <tr><td>int pingRight()</td><td>Get distance to object to right.</td></tr>

    <tr></tr>

    <tr><td>void setMotorSpeed(int theMotorSpeed)</td><td>Change speed of drive motor - value between 0 and 255, default is 150.</td></tr>
    <tr><td>void pause(float pauseTime)</td><td>Pause execution for given number of seconds.</td></tr>

    <tr></tr>

    <tr><td>void laser(laserState ls)</td><td>Set state of laser;
    	<ul>
    		<li>on.</li>
    		<li>off.</li>
    		<li>onPing - only have laser on when sonar is active.</li>
    	</ul>
    </td></tr>

    <tr><td>void laserOn()</td><td>Turn laser on.</td></tr>
    <tr><td>void laserOff()</td><td>Turn laser off.</td></tr>

    <tr></tr>

    <tr><td>void test()</td><td>Test front and read servo movement.</td></tr>
	<tr><td>void checkServoMotors()</td><td>Ensure servero motors are attached.</td></tr>  
</table>
```

Hope you find it useful and have fun!

Steve.