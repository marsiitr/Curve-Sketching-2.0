# Curve Sketching Bot 2.0
## Abstract

The aim of the project is to create a bot which can sketch any curve on a plane surface.  

 ![Curve](https://github.com/R-VijaiKumar/Curve-Sketching-2.0/blob/master/Images%20and%20Videos/Images/Front%20View.JPG)


## Motivation

We got inspiration to do this project because there is no handy product to sketch/plot on large scale.


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

1.  It's a 3 wheeled omni drive bot which can sketch any curve given to it. 
2.  The chasis is made of aluminium square channels in an equilateral triangular design. 
3.  Motor and the omni wheel are attached togather with couplings. 
4.  3 wheels are placed at 120deg to each other. 
5.  Encoders ,attached with free wheels using coupling, are attached to the chasis using hinges so that all 5 wheels are on the same plane.Both the encoders are placed mutually perpendicular to each other.
6. Pen is placed at the centroid with the help of 3d printed cylinderical part.Linear bearings are used for easy motion of pen.A spring is attached to the pen on the top and is pressed by a wooden block.

## Electronics Aspect Of Design

1.  3 motors are controlled by 2 motor drivers which is powered directly from 11.1V LiPo battery.
2.  Encoders are given 5v regulated power.
3.  Output A of both the encoders are connected to normal digital pins whereas Output B of both the encoders are connected to interrupt pins.
4.  Gyroscope is directly attached to arduino scl/sda pins with male-male connector to reduce wire length.
5.  Gyroscope is given power from 5V output from arduino.
6.  2 switches are used.One for motor drives and another one for rest of the system.

## Cost Structure 

|Components|Cost(INR)|
|----------|---------|
|Wheels|Rs.2250|
|Linear Bearing|Rs.200|
|Gyroscope(MPU 9250)|Rs.450|
|Motors|Rs.1500|
|Motor Drive|Rs.5000|
|Arduino Mega|Rs.650|
|Bread Board|Rs.100|
|11.1V LiPo Battery|Rs.750|
|Aluminium square channels|Rs.100|
|**Total**|**Rs.11,000**|
## Applications

Plotting any continuous curves on any scale of canvas.

## Limitations

*  It cannot draw a discontinuous curve at presesnt.
*  Particular size of pen can only be used.
*  It can plot only in single colour.

## Future Improvements

*  Attaching a servo motor for rising pen up to plot discontinuous curves.
*  Image Plotting(By using G-Code)

## Team Members
1.  Ruchika Atul Guntewar
2.  Sanjeev Krishnan R
3.  Vijai Kumar R

## Mentors

1.  Ujjwal Baranwal
2.  Vedant Neekhra
![Team](https://drive.google.com/file/d/13Fixmz_M8GAl-Cm-Ez9yXGT-KP7jmOke/view?usp=sharing)
## References
 
