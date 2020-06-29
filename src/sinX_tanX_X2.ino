#include <MPU9250.h>
const double pi = 3.1415926535897932384626433832795;
int v[3] = {0, 0, 0}, V = 100, motPin[3] = {8, 9, 10}, motAnalog[3] = {11, 12, 7}, encPin[4] = {33, 2, 35, 3};
volatile int counterx = 0, countery = 0;
float ang = 0, ax = 0, ay = 0, cx = -15, cy = 0, tx = 0, ty = 0, actEe, actEy, actEg, Kp1 = 0.5, Kp2 = 4, Kd1 = 0, Kd2 = 0, w1 = 0, g1 = 0, w;//3.15

MPU9250 IMU;

double t;

int16_t gyro[3] = {0, 0, 0};
int16_t acc[3] = {0, 0, 0};
float gyroBias[3]  = {0, 0, 0};
float accelBias[3] = {0, 0, 0};
int dt;
long Time;
double ix = -15.0 , iy = 0.0;

double x = 0.0, y = 0.0;
double cosine , sine;
double offset;
double gyr_angle = 0.00;
double sum = 0;

void read_gyro() {
  if ((micros() - Time) > 13000) {
    IMU.readGyroData(gyro);
    dt = micros() - Time;
    gyr_angle += (gyro[2] - gyroBias[2]) * dt / 131.0 / 1000000.0;
    Time = micros();
  }
}

float rad(float a)
{
  return a * 2 * pi / 360;
}
float f(float x) //this code can plot 3 curves by changing pins in arduino...to plot some other curve change the returning function accordingly.
{
 if(digitalRead(37)==HIGH)
  return 15 * sin(0.1 * x); //0.1 * x * x;
 else if(digitalRead(39)==HIGH)
  return 0.08*x*x;
 else
  return 15*atan(0.1*x);
}
void basev(float a, float b, float c, float d)
{
  ang = atan((d - b) / (c - a));
}

void base_pwm() {
  v[0] = V * (cos(rad(0)) * cos(ang) + sin(rad(0)) * sin(ang));
  v[1] = V * (cos(rad(240)) * cos(ang) + sin(rad(240)) * sin(ang));
  v[2] = V * (cos(rad(120)) * cos(ang) + sin(rad(120)) * sin(ang));
}

void wheels()
{
  for (int i = 0; i < 3; i++)
  {
    
    analogWrite(motAnalog[i], constrain(abs(v[i]) , 0 , 255));
    
    if (v[i] >= 0)
    {
      digitalWrite(motPin[i], LOW);
      
    }
    else
    {
      
      digitalWrite(motPin[i], HIGH);
    }
  }
}
void enc_read()
{
  float disx = counterx * 5.8 * pi / 600.0;
  float disy = countery * 5.8 * pi / 600.0;
  cy = disy * cos(rad(gyr_angle)) - disx * sin(rad(gyr_angle));
  cx = disy * sin(rad(gyr_angle)) + disx * cos(rad(gyr_angle));
}


void setup() {
  Serial.begin(9600);
  pinMode(37,INPUT);

  for (int i = 0; i < 3; i++)
    pinMode(motPin[i], OUTPUT);
  for (int i = 0; i < 3; i++)
    pinMode(motAnalog[i], OUTPUT);
  for (int i = 0; i < 4; i++)
    pinMode(encPin[i], INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(encPin[1]), ai0, RISING);
  attachInterrupt(digitalPinToInterrupt(encPin[3]), ai1, RISING);


  for (int i = 0; i <= 10 ; i++) {
    IMU.readGyroData(gyro);
    sum += gyro[2];
    delay(10);
  }
  gyroBias[2] = sum / 11.0;
  ang = 0;
  
}

void loop() {
  
  if (cx >=tx) {
    ix = cx;
    iy = cy;
    tx = ix + 0.1 ;
    ty = f(tx);
    basev(ix, f(ix), tx, ty);
    
  }
  
  read_gyro();
  enc_read();
  w = cy - f(cx);
  actEe = w * Kp1 + (w - w1) * Kd1;
  w1 = w;
  actEg = gyr_angle * Kp2 + (gyr_angle - g1) * Kd2;
  g1 = gyr_angle;

  base_pwm();
  v[0] += actEg;
  v[1] += (actEg + actEe);
  v[2] += (actEg - actEe);

  wheels();
    Serial.println(gyr_angle);

  if(cx >= 65)
  {
    for (int i = 0; i < 3 ; i++)
    {
      v[i] = 0;
    }
    wheels();
    while(1);
  }


}



void ai0()
{
  if (digitalRead(encPin[0]) == LOW)
    counterx--;
  else
    counterx++;
}
void ai1()
{
  if (digitalRead(encPin[2]) == LOW)
    countery++;
  else
    countery--;
}
