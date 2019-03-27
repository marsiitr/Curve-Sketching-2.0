# Curve Sketching Bot 2.0
## ABSTRACT

The aim of the project is to create a bot which can sketch any curve on a planr surface.  

 ![Curve Sketching Bot 2.0](/Curve-Sketching-2.0/images and videos/images/3.JPG)


## MOTIVATION


## MATERIALS REQUIRED

* 5x 58mm plastic omni-wheel.
* 3x 300rpm DC motors.
* 2x Rotary Encoders.
* 1x Arduino Mega.
* 2x Cytron motor drives.
* 1x Gyroscope(MPU 9250).
* 1X 5V Regulator(7805).
* 1x 9V Regulator(7809).
* 2x Linear Bearings.
* 2xswitches.
* 3d printed parts.
* 1x Full Br7ead board.
* Jumper wires.
* Aluminium square channels+plates.
* 1x 11.1v 2200mAh LiPo battery.
* 1x Pen.
* 1x Spring.

## MECHANICAL ASPECT OF DESIGN

It's a 3 wheeled omni drive bot which can sketch any curve given to it. The chasis is made of aluminium square channels in an equilateral triangular design. Motor and the omni wheel are attached togather with couplings. 3 wheels are placed at 120deg to each other. Encoders ,attached with free wheels using coupling, are attached to the chasis using hinges so that all 5 wheels are on the same plane.Both the encoders are placed mutually perpendicular to each other.Pen is placed at the centroid with the help of 3d printed cylinderical part.Linear bearings are used for easy motion of pen.A spring is attached to the pen on the top and is pressed by a wooden block.

## ELECTRONICS ASPECTT OF THE DESIGN

3 motors are controlled by 2 motor drives which is powered directly from 11.1V LiPo battery.Encoders are given 5v regulated power.Output A of both the encoders are connected to normal digital pins whereas Output B of both the encoders are connected to interrupt.Gyroscope is directly attached to arduino scl/sda pins with male-male connector to reduce wire length.Gyroscope is given power from 5V output from arduino.2 switches are used.One for motor drives and another one for rest of the system.

## COST STRUCTURE 


## APPLICATIONS

Plotting any continuous curves on any scale of canvas.

## LIMITATIONS

*  It cannot draw a discontinous curve at presesnt.
*  Particular size of pen can only be used.
*  It can plot only in single colour.

## FUTURE IMPROVEMENTS

*  Attaching a servo motor for rising pen up to plot discontinous curves.
*  Image Plotting(By using G-Code)

## TEAM MEMBERS

1.  Ruchika Atul Guntewar
2.  Sanjeev Krishnan R
3.  Vijai Kumar R

## MENTORS

1.  Ujjwal Baranwal
2.  Vedant Neekhra

## REFERENCES

 
