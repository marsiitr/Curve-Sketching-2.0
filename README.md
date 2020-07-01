# Curve Sketching Bot 2.0
### Srishti 2019

## Abstract

The aim of this project was to make a bot that can sketch any given curve on a plane surface. 

 ![Curve](https://github.com/R-VijaiKumar/Curve-Sketching-2.0/blob/master/Images%20and%20Videos/Images/Front%20View.JPG)


## Motivation

There is no handy product in the market to sketch or plot curves on large scale canvas.

The previous version of this bot-Curve Sketching Bot (Srishti 2018) traverses using differential chassis. It was disadvantageous since it was slow and had to change its orientation every time to move along the curve.

Hence we came up with the idea of making an advanced version of the bot that is faster, moves in a locked orientation, and with other possible advanced features.


## Materials Required

* 5x 58mm plastic omni-wheel.
* 3x 300rpm DC motors.
* 2x Rotary Encoders.
* 1x Arduino Mega.
* 2x Cytron motor drivers.
* 1x Gyroscope(MPU 9250).
* 1X 5V Regulator(7805).
* 1x 9V Regulator(7809).
* 2x Linear Bearings.
* 2x switches.
* 3d printed parts.
* 1x Full Bread board.
* Jumper wires.
* Aluminium square channels+plates.
* 1x 11.1V 2200mAh LiPo battery.
* 1x Pen.
* 1x Spring.

## Mechanical Aspect Of Design


### Chassis
It is an equilateral triangle-shaped, 3 wheeled Omni drive bot that can be easily manufactured. Omni drives are really fast, it can move in any direction without changing its orientation i.e., in locked orientation and the wheels always stay in contact with the ground even if the surface is uneven.

### Material
The chassis is made up of square aluminum channels. It reduces the overall weight of the bot and hence reducing the load on motors.

### Motor Assembly
Three Johnson 300rpm motors are used, to get the required torque. They are coupled with Omni wheels using 3D printed couplers and the shaft of the motor is passed through radial ball bearing. The bearing block is mounted on the chassis holding the wheel assembly and chassis together. The three wheel assemblies are mounted on the three vertices of the triangular chassis i.e., at 120° to each other.

### Encoder Assembly
Two encoders are mounted mutually perpendicular to each other on the triangular chassis with their axes intersecting at the centroid of the chassis. And two free wheels are attached to these encoders to get feedback from the 'x' and 'y' axes. This encoder assembly is mounted on the chassis using a hinge so that all five wheels can have proper contact with the surface.

### Pen Holder
It is a 3D printed cylindrical holder that is placed at the centroid of the chassis. It can hold only one pen at a time and the size of the holder is fixed and hence the pen diameter is fixed. 

### Electronic Components
All electronic components are placed on the top of the chassis with cardboard as the base to reduce weight and to avoid short circuits as aluminum is an electric conductor.


## Electronics Aspect Of Design

### Code Algorithm
1. All actuations are done with appropriate velocities which are calculated by dividing the curve into small distances.
2. Feedbacks are obtained from encoders and MPU9250.
3. PID mechanism is the control loop mechanism here. It changes the velocities according to the obtained feedback.
4. This process is done in a loop until the curve is fully plotted.

### Microcontroller
Arduino Mega 2560 R3 is used as the microcontroller board.

### Sensors
* MPU9250 is used to get the angular motion feedback of the bot. It is directly connected to SDA/SCL sockets of the Arduino Mega board through male headers as wires interrupt serial communication.
* Two Rotary Encoders are used to get linear motion feedback from x and y axes.

### Actuators
* Jhonson 300rpm motors are used for traversal actuation which is controlled by Cytron motor driver.

### Other Components
* IC LM7809 and IC LM7805 for converting 11.1V DC to 9V DC and 5V DC respectively
* Two switches are used-One for motor drivers and another for the rest of the bot. 

### Power Source
* 11.1V LiPo battery is used as the power source.
* Motors are directly powered from the battery.
* Arduino Mega board is powered with 9V converted output of the battery.
* Encoders are powered with 5V converted output of the battery.
* MPU9250 is powered with 5V Vcc of Arduino.

=======
1.  It's a 3 wheeled omni drive bot which can sketch any curve given to it. 
2.  The chasis is made of aluminium square channels in an equilateral triangular design. 
3.  Motor and the omni wheel are attached together with couplings. 
4.  3 wheels are placed at 120 degree to each other. 
5.  Encoders, attached with free wheels using coupling, are attached to the chasis using hinges so that all 5 wheels are in the same plane.Both the encoders are placed mutually perpendicular to each other.
6. Pen is placed at the centroid with the help of 3d printed cylindrical part. Linear bearings are used for easy motion of pen. A spring is attached to the pen on the top and is pressed by a wooden block.

## Electronics Aspect Of Design

1.  3 motors are controlled by 2 motor drivers which is powered directly from 11.1V LiPo battery.
2.  Encoders are given +5V regulated power.
3.  Output A of both the encoders are connected to normal digital pins whereas Output B of both the encoders are connected to interrupt     pins.
4.  Gyroscope is directly attached to arduino's scl/sda pins with male-male connector to reduce wire length.
5.  Gyroscope is given 5V output power from arduino.
6.  2 switches are used. One for motor drivers and another one for rest of the system.


## Cost Structure 

|Components|Cost(INR)|
|----------|---------|
|Wheels|5*450|
|Linear Bearing|2*100|
|Gyroscope(MPU 9250)|1*450|
|Motors|3*500|
|Motor Drive|2*2500|
|Arduino Mega|1*650|
|Bread Board|1*100|
|11.1V LiPo Battery|1*750|
|Aluminium square channels|1*100|
|**Total**|**11,000**|
## Applications

It can be used to plot any continuous curve on plane canvas of any scale.

## Limitations

* It cannot be used to plot discontinuous curves.
* The pen size is fixed.
* It can plot only in one color. 

## Future Improvements

* A servo motor can be attached to the pen holder to make it possible for the bot to plot discontinuous curves.
* Pen holder design can be changed to hold multiple pens to make the bot plot in multiple colors.
* The code can be improved to plot images using G-code.

## Team Members
1.  Ruchika Atul Guntewar
2.  Sanjeev Krishnan R
3.  Vijai Kumar R

## Mentors

1.  Ujjwal Baranwal
2.  Vedant Neekhra
![Team](https://github.com/R-VijaiKumar/Curve-Sketching-2.0/blob/master/Images%20and%20Videos/Images/Team.jpg)
## References
 
<https://www.google.com/amp/s/amp.livescience.com/40103-accelerometer-vs-gyroscope.html>

<https://www.autonomousrobotslab.com/pid-control.html>
