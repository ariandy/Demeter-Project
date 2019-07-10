/* 
   -- New_arm_2 -- 
    
   This source code of graphical user interface  
   has been generated automatically by RemoteXY editor. 
   To compile this code using RemoteXY library 2.3.3 or later version  
   download by link http://remotexy.com/en/library/ 
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                    
     - for ANDROID 4.1.1 or later version; 
     - for iOS 1.2.1 or later version; 
     
   This source code is free software; you can redistribute it and/or 
   modify it under the terms of the GNU Lesser General Public 
   License as published by the Free Software Foundation; either 
   version 2.1 of the License, or (at your option) any later version.     
*/ 

////////////////////////////////////////////// 
//        RemoteXY include library          // 
////////////////////////////////////////////// 

// RemoteXY select connection mode and include library  
#define REMOTEXY_MODE__HARDSERIAL

#include <RemoteXY.h> 

// RemoteXY connection settings  
#define REMOTEXY_SERIAL Serial 
#define REMOTEXY_SERIAL_SPEED 9600 


// RemoteXY configurate   
#pragma pack(push, 1) 
uint8_t RemoteXY_CONF[] = 
  { 255,15,0,216,0,155,2,8,8,5,1,0,17,17,10,10,1,2,31,43,0,1,0,5,17,10,10,1,2,31,45,0,67,4,31,18,18,4,1,2,26,11,67,4,31,23,18,4,1,2,26,11,66,129,18,12,31,4,1,2,26,1,
  0,5,35,10,10,1,2,31,45,0,1,0,17,35,10,10,1,2,31,43,0,66,129,18,30,31,4,1,2,26,67,4,31,36,18,4,1,2,26,11,67,4,31,41,18,4,1,2,26,11,1,0,5,53,10,10,1,2,31,45,0,1,0,17,
  53,10,10,1,2,31,43,0,66,129,18,48,31,4,1,2,26,67,4,31,54,18,4,1,2,26,11,67,4,31,59,18,4,1,2,26,11,1,0,5,71,10,10,0,1,31,32,99,119,32,0,1,0,17,71,10,10,0,1,31,99,99,
  119,0,66,129,18,66,31,4,0,1,26,67,4,31,72,18,4,0,2,26,11,67,4,31,77,18,4,0,2,26,11,67,4,12,88,12,5,1,2,26,11,129,0,22,2,20,3,0,17,68,101,118,101,108,111,112,101,100,
  32,98,121,0,129,0,12,6,41,3,0,17,65,114,105,97,110,100,121,32,47,32,49,107,98,32,47,32,111,111,120,121,122,32,47,32,70,66,84,78,0,67,4,37,88,12,5,1,2,26,11,129,0,7,
  88,3,5,1,17,88,0,129,0,32,88,3,5,1,17,89,0,3,2,51,52,10,18,0,2,26,129,0,6,13,11,3,1,17,84,104,101,116,97,32,51,0,129,0,6,31,11,3,1,17,84,104,101,116,97,32,50,0,129,
  0,6,49,11,3,1,17,84,104,101,116,97,32,49,0,129,0,6,67,7,3,0,17,66,97,115,101,0,131,1,51,32,10,7,1,2,31,70,75,0,131,0,51,42,10,7,2,2,31,73,75,0,66,129,18,12,31,4,2,2,
  26,129,0,6,13,2,3,2,17,88,0,66,129,18,30,31,4,2,2,26,1,0,5,17,10,10,2,2,31,45,0,1,0,17,17,10,10,2,2,31,43,0,1,0,5,35,10,10,2,2,31,45,0,129,0,6,31,2,3,2,17,89,0,1,0,
  17,35,10,10,2,2,31,43,0,129,0,6,49,4,3,2,17,84,105,112,0,1,0,5,53,10,10,2,2,31,45,0,1,0,17,53,10,10,2,2,31,43,0,66,129,18,48,31,4,2,2,26,67,4,31,20,18,4,2,2,26,11,
  67,4,31,38,18,4,2,2,26,11,67,4,31,56,18,4,2,2,26,11,129,0,6,83,10,3,2,17,84,104,101,116,97,32,51,0,129,0,21,83,10,3,2,17,84,104,101,116,97,32,50,0,129,0,36,83,10,3,
  2,17,84,104,101,116,97,32,49,0,67,4,6,87,13,5,2,2,26,11,67,4,21,87,13,5,2,2,26,11,67,4,36,87,13,5,2,2,26,11,67,4,6,93,13,5,2,2,26,11,67,4,21,93,13,5,2,2,26,11,67,4,
  36,93,13,5,2,2,26,11}; 
   
// this structure defines all the variables of your control interface  
struct { 

    // input variable
  uint8_t btn_theta3_plus; // =1 if button pressed, else =0 
  uint8_t btn_theta3_min; // =1 if button pressed, else =0 
  uint8_t btn_theta2_min; // =1 if button pressed, else =0 
  uint8_t btn_theta2_plus; // =1 if button pressed, else =0 
  uint8_t btn_theta1_min; // =1 if button pressed, else =0 
  uint8_t btn_theta1_plus; // =1 if button pressed, else =0 
  uint8_t btn_cw; // =1 if button pressed, else =0 
  uint8_t btn_ccw; // =1 if button pressed, else =0 
  uint8_t select_1; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t btn_xmin; // =1 if button pressed, else =0 
  uint8_t btn_xplus; // =1 if button pressed, else =0 
  uint8_t btn_ymin; // =1 if button pressed, else =0 
  uint8_t btn_yplus; // =1 if button pressed, else =0 
  uint8_t btn_tipmin; // =1 if button pressed, else =0 
  uint8_t btn_tipplus; // =1 if button pressed, else =0 

    // output variable
  char txt_pwm3[11];  // string UTF8 end zero 
  char txt_angle3[11];  // string UTF8 end zero 
  int8_t level_1; // =0..100 level position 
  int8_t level_2; // =0..100 level position 
  char txt_pwm2[11];  // string UTF8 end zero 
  char txt_angle2[11];  // string UTF8 end zero 
  int8_t level_3; // =0..100 level position 
  char txt_pwm1[11];  // string UTF8 end zero 
  char txt_angle1[11];  // string UTF8 end zero 
  int8_t level_4; // =0..100 level position 
  char txt_pwm0[11];  // string UTF8 end zero 
  char txt_angle0[11];  // string UTF8 end zero 
  char txt_x_o[11];  // string UTF8 end zero 
  char txt_y_o[11];  // string UTF8 end zero 
  int8_t level_5; // =0..100 level position 
  int8_t level_6; // =0..100 level position 
  int8_t level_7; // =0..100 level position 
  char txt_x[11];  // string UTF8 end zero 
  char txt_y[11];  // string UTF8 end zero 
  char txt_tip[11];  // string UTF8 end zero 
  char txt_theta3pwm_o[11];  // string UTF8 end zero 
  char txt_theta2pwm_o[11];  // string UTF8 end zero 
  char txt_theta1pwm_o[11];  // string UTF8 end zero 
  char txt_theta3angle_o[11];  // string UTF8 end zero 
  char txt_theta2angle_o[11];  // string UTF8 end zero 
  char txt_theta1angle_o[11];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY; 
#pragma pack(pop) 

///////////////////////////////////////////// 
//           END RemoteXY include          // 
///////////////////////////////////////////// 
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//----PCA9685

#define SERVOMIN    150
#define SERVOMAX    600

#define GAP         450
#define DEGTOPWM    2.5

#define SERVOMID    375
 
#define PWMFOR45    263
#define PWMFOR60    300
#define PWMFOR120   450       
#define PWMFOR135   488
 
#define BASE          0
#define L           6.5

#define SIGNAL       60

#define STEP          2
#define STEPZ      0.05
#define STEPTIP    0.15


//--------------------------------------------------------------- Posisi awal FK

int pwm0 = SERVOMID;
int pwm1 = SERVOMID;
int pwm2 = SERVOMID;
int pwm3 = SERVOMID;

//--------------------------------------------------------------- Posisi awal IK  

float tip = 20;
float y   = 14;
float x   = 5;

void setup()  
{ 
  RemoteXY_Init ();  
   
  pwm.begin();
  pwm.setPWMFreq(SIGNAL);
  yield();
   
} 

void loop()  
{  
  RemoteXY_Handler (); 
  if (RemoteXY.select_1 == 0) {
//--------------------------------------------------------------- Kontrol
    if (RemoteXY.btn_cw != 0) {
      pwm0 = pwm0 + STEP;
      if (pwm0 >= SERVOMAX) {
        pwm0 = SERVOMAX;
      }
    }
    delay(1);
    if (RemoteXY.btn_ccw != 0) {
      pwm0 = pwm0 - STEP;
      if (pwm0 <= SERVOMIN) {
        pwm0 = SERVOMIN;
      }
    }
    delay(1);
    
    if (RemoteXY.btn_theta1_plus != 0) {
      pwm1 = pwm1 + STEP;
      if (pwm1 >= SERVOMAX) {
        pwm1 = SERVOMAX;
      }
    }
    delay(1);
    if (RemoteXY.btn_theta1_min != 0) {
      pwm1 = pwm1 - STEP;
      if (pwm1 <= SERVOMIN) {
        pwm1 = SERVOMIN;
      }
    }
    delay(1);

    if (RemoteXY.btn_theta2_plus != 0) {
      pwm2 = pwm2 + STEP;
      if (pwm2 >= SERVOMAX) {
        pwm2 = SERVOMAX;
      }
    }
    delay(1);
    if (RemoteXY.btn_theta2_min != 0) {
      pwm2 = pwm2 - STEP;
      if (pwm2 <= SERVOMIN) {
        pwm2 = SERVOMIN;
      }
    }
    delay(1);

    if (RemoteXY.btn_theta3_plus != 0) {
      pwm3 = pwm3 + STEP;
      if (pwm3 >= SERVOMAX) {
        pwm3 = SERVOMAX;
      }
    }
    delay(1);
    if (RemoteXY.btn_theta3_min != 0) {
      pwm3 = pwm3 - STEP;
      if (pwm3 <= SERVOMIN) {
        pwm3 = SERVOMIN;
      }
    }
    delay(1);

//--------------------------------------------------------------- Konversi PWM ke Degree

    float angle0 = pwm0 / 2.5 - 60;
    float angle1 = pwm1 / 2.5 - 60;
    float angle2 = pwm2 / 2.5 - 60;
    float angle3 = pwm3 / 2.5 - 60;
  
//--------------------------------------------------------------- Konversi Tipe Data Angle
  
    int a0 = (int) angle0;
    int a1 = (int) angle1;
    int a2 = (int) angle2;
    int a3 = (int) angle3;
  
//--------------------------------------------------------------- Cetak Nilai PWM
  
    itoa (pwm0, RemoteXY.txt_pwm0, 10);
    itoa (pwm1, RemoteXY.txt_pwm1, 10);
    itoa (pwm2, RemoteXY.txt_pwm2, 10);
    itoa (pwm3, RemoteXY.txt_pwm3, 10);
        
//--------------------------------------------------------------- Cetak Nilai Angle
  
    itoa (a0, RemoteXY.txt_angle0, 10);
    itoa (a1, RemoteXY.txt_angle1, 10);
    itoa (a2, RemoteXY.txt_angle2, 10); 
    itoa (a3, RemoteXY.txt_angle3, 10); 

//--------------------------------------------------------------- Algotitma FK

    int theta1 = angle1;
    int theta2 = angle2 - 90;
    int theta3 = angle3 - 90;
    
    float theta_onRad1 = theta1 * PI /180;
    float theta_onRad2 = theta2 * PI /180;
    float theta_onRad3 = theta3 * PI /180;
  
    float theta_a = theta_onRad1;
    float theta_b = theta_a + theta_onRad2;
    float theta_c = theta_b + theta_onRad3;
  
    float x1 = L * cos(theta_a);
    float x2 = L * cos(theta_b);
    float x3 = L * cos(theta_c);
    
    float y1 = L * sin(theta_a);
    float y2 = L * sin(theta_b);
    float y3 = L * sin(theta_c);
    
    double x_fk_output = x1  + x2 + x3;
    double y_fk_output = y1  + y2 + y3 + BASE;
  
    dtostrf(x_fk_output, 0, 2, RemoteXY.txt_x_o);
    dtostrf(y_fk_output, 0, 2, RemoteXY.txt_y_o);

//--------------------------------------------------------------- Penggerak Servo
  
    pwm.setPWM(0,0,pwm0);
    pwm.setPWM(1,0,pwm1);
    pwm.setPWM(2,0,pwm2);
    pwm.setPWM(3,0,pwm3);

    RemoteXY.level_1 = (int)((pwm3-150)/4.5);
    RemoteXY.level_2 = (int)((pwm2-150)/4.5);
    RemoteXY.level_3 = (int)((pwm1-150)/4.5);
    RemoteXY.level_4 = (int)((pwm0-150)/4.5);
    
  } else {

    float tip_onRad = tip * PI /180;
    float x_joint = x - cos(tip_onRad) * L;
    float y_joint = y - sin(tip_onRad) * L - BASE;
  
    float B = sqrt(sq(x_joint)+sq(y_joint));
    
    float alpha1 = atan2(y_joint, x_joint);
    float al2_denum = 2*L;
    float alpha2 = acos(B/al2_denum);
    
    float joint_1st_deg = (alpha1 + alpha2) * 180 /PI;
  
    float j2_num = 2*L*L - B*B;
    float j2_denum = 2*L*L;
    float j2 = acos( j2_num / j2_denum );
    float joint_2nd_deg = j2 * 180 /PI - 180;
  
    float joint_3rd_deg = tip - joint_1st_deg - joint_2nd_deg;

//--------------------------------------------------------------- Konversi Gap ke Deg

    float servo_ik_1 = joint_1st_deg;
    float servo_ik_2 = 90 + joint_2nd_deg;
    float servo_ik_3 = 90 + joint_3rd_deg;

//--------------------------------------------------------------- Kontrol

    if (RemoteXY.btn_cw != 0) {
      pwm0 = pwm0 + STEP;
      if (pwm0 >= SERVOMAX) {
        pwm0 = SERVOMAX;
      }
    }
    delay(1);
    if (RemoteXY.btn_ccw != 0) {
      pwm0 = pwm0 - STEP;
      if (pwm0 <= SERVOMIN) {
        pwm0 = SERVOMIN;
      }
    }
    delay(1);
    
    if (RemoteXY.btn_tipplus != 0) {
      tip = tip + STEPTIP;
    }
    delay(1);
    if (RemoteXY.btn_tipmin != 0) {
      tip = tip - STEPTIP;
    }
    delay(1);

    if (RemoteXY.btn_yplus != 0) {
      y = y + STEPZ;
    }
    delay(1);
    if (RemoteXY.btn_ymin != 0) {
      y = y - STEPZ;
    }
    delay(1);
    
    if (RemoteXY.btn_xplus != 0) {
      x = x + STEPZ;
    }
    delay(1);
    if (RemoteXY.btn_xmin != 0) {
      x = x - STEPZ;
    }
    delay(1);

    dtostrf(tip, 0, 2, RemoteXY.txt_tip);
    dtostrf(y, 0, 2, RemoteXY.txt_y);
    dtostrf(x, 0, 2, RemoteXY.txt_x);
    
    if ( B > 2*L ) {
      
      sprintf(RemoteXY.txt_theta1angle_o, ":(");
      sprintf(RemoteXY.txt_theta2angle_o, ":(");
      sprintf(RemoteXY.txt_theta3angle_o, ":(");

      sprintf(RemoteXY.txt_theta1pwm_o, ":(");
      sprintf(RemoteXY.txt_theta2pwm_o, ":(");
      sprintf(RemoteXY.txt_theta3pwm_o, ":(");
      
    } else {

      dtostrf(servo_ik_1, 0, 2, RemoteXY.txt_theta1angle_o);
      dtostrf(servo_ik_2, 0, 2, RemoteXY.txt_theta2angle_o);
      dtostrf(servo_ik_3, 0, 2, RemoteXY.txt_theta3angle_o);
      
//--------------------------------------------------------------- Konversi Deg ke PWM
      
      float sik1 = servo_ik_1 * 2.5 + 150;
      float sik2 = servo_ik_2 * 2.5 + 150;
      float sik3 = servo_ik_3 * 2.5 + 150;
      
      int ser_1 = (int) sik1;
      int ser_2 = (int) sik2;
      int ser_3 = (int) sik3;

      itoa(ser_1, RemoteXY.txt_theta1pwm_o,10);
      itoa(ser_2, RemoteXY.txt_theta2pwm_o,10);
      itoa(ser_3, RemoteXY.txt_theta3pwm_o,10);
            
      pwm.setPWM(0,0,pwm0);
      pwm.setPWM(1,0,ser_1);
      pwm.setPWM(2,0,ser_2);
      pwm.setPWM(3,0,ser_3);

    } 
    
    int int_tip = (int) tip;
    int_tip = int_tip % 360;
  
    RemoteXY.level_5 = (int)(x*5.128);
    RemoteXY.level_6 = (int)(y*5.128);
    RemoteXY.level_7 = (int)(int_tip/3.6);

  }
}
