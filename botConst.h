
////////////////////////field info////////////////////
#define dist_2_frame 10 
#define last_dist_2_frame 5
#define last_frame_to_wall 23
#define dist_between_2_row 23 
#define dist_to_first_col  20
#define beforeTurnDist  15//5.625 inches
#define wallOffsetThresh  7 
#define check_parallel_thresh 3
#define NO_ROW 4 
#define NO_STOP_PER_ROW 5 // the last stop is half of 1 regular stop.



/** advande bot 1*/
///////////////////////Driving.h const//////////////////////
#define WHEELDIAMETER 2.99 //2017 robot wheel 
///
// adjust this value until the 2 encoder run at the same rate.
// in order this lib to work as expected. 
//
#define R_MOTOR_MAX 98
#define L_MOTOR_MAX 104
#define L_TARGET_DIST_OFFSET 0.5
#define R_TARGET_DIST_OFFSET 0.5

#define L_TARGET_ANGLE_OFFSET 5
#define R_TARGET_ANGLE_OFFSET 4
//define controller constant
#define K1 0.438		//LEFT controller constant
#define K2 0.45743	//RIGHT controller constant
#define V	0.3//1.3			//speed controller constant
#define I	0.7		//integral controller constant


///////////////////////////SONAR info/////////////////////////////


///////////////////SCC_Driver robot arm info///////////////
#define L2 5.7578125
#define L3 7.3575
// old gripper #define L4 4.2700  3.9810
#define L4 4.2700

///////////////////CameraArmDriver.h///////////////////////
//define range of motor
// these defineition need to be config and change everytime using a new set of servo.
// custom min/max pulse width settings that best suit my servos
//shoulder
#define CENTER_SHOULDER 76
#define CW_SHOULDER 0 // right
#define CCW_SHOULDER 170 // left
#define SHOULDER_MIN_PW 570//calibrate the servo to get the best fit value.
#define SHOULDER_MAX_PW 2470

//base
#define CENTER_BASE 76
#define CW_BASE 2 // right
#define CCW_BASE 161 // left
#define BASE_MIN_PW 570//calibrate the servo to get the best fit value.
#define BASE_MAX_PW 2470

#define S_OFFSET 0
#define S_SPEED 20 // um pwm delay interpret as speed.



// comment all line above and uncomment these line below to program bot 2.
//========================================================================================//
/** advande bot 2
///////////////////////Driving.h const//////////////////////
#define WHEELDIAMETER 2.99 //2017 robot wheel 
///
// adjust this value until the 2 encoder run at the same rate.
// in order this lib to work as expected. 
//
#define R_MOTOR_MAX 98
#define L_MOTOR_MAX 104
#define L_TARGET_DIST_OFFSET 0.5
#define R_TARGET_DIST_OFFSET 0.5

#define L_TARGET_ANGLE_OFFSET 5
#define R_TARGET_ANGLE_OFFSET 4
//define controller constant
#define K1 0.438		//LEFT controller constant
#define K2 0.45743	//RIGHT controller constant
#define V	0.3//1.3			//speed controller constant
#define I	0.7		//integral controller constant


///////////////////////////SONAR info/////////////////////////////


///////////////////SCC_Driver robot arm info///////////////
#define L2 5.7578125
#define L3 7.3575
// old gripper #define L4 4.2700  3.9810
#define L4 4.2700

///////////////////CameraArmDriver.h///////////////////////
//define range of motor
// these defineition need to be config and change everytime using a new set of servo.
// custom min/max pulse width settings that best suit my servos
//shoulder
#define CENTER_SHOULDER 76
#define CW_SHOULDER 0 // right
#define CCW_SHOULDER 170 // left
#define SHOULDER_MIN_PW 570//calibrate the servo to get the best fit value.
#define SHOULDER_MAX_PW 2470

//base
#define CENTER_BASE 76
#define CW_BASE 2 // right
#define CCW_BASE 161 // left
#define BASE_MIN_PW 570//calibrate the servo to get the best fit value.
#define BASE_MAX_PW 2470

#define S_OFFSET 0
#define S_SPEED 20 // um pwm delay interpret as speed.
*/