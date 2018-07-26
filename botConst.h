
/************************field info******************/
#define dist_2_frame 10 
#define last_frame_to_wall 
#define dist_between_2_row 23 
#define dist_to_first_row 
const int beforeTurnDist = 15;//5.625 inches
const int wallOffsetThresh = 7; 
const int NO_ROW= 4 ;
#define NO_STOP_PER_ROW 5 // the last stop is half of 1 regular stop.



#ifdef botConst1
	/******************Driving.h const************************/
	#define WHEELDIAMETER 2.99 //2017 robot wheel 
	/**
	 * adjust this value until the 2 encoder run at the same rate.
	 * in order this lib to work as expected. 
	 */
	#define R_MOTOR_MAX 98
	#define L_MOTOR_MAX 104
	#define L_TARGET_DIST_OFFSET 0.1
	#define R_TARGET_DIST_OFFSET 0

	#define L_TARGET_ANGLE_OFFSET 5
	#define R_TARGET_ANGLE_OFFSET 4
	//define controller constant
	#define K1 0.438		//LEFT controller constant
	#define K2 0.45743	//RIGHT controller constant
	#define V	0.3//1.3			//speed controller constant
	#define I	0.7		//integral controller constant


	/******************SONAR info*****************************/
	int const sonarOffset[4] = {-2,-1, -2,-1};

	/****************SCC_Driver robot arm info*****************/
		#define L2 5.7578125
	#define L3 7.3575
	// old gripper #define L4 4.2700  3.9810
	#define L4 4.2700

	/****************CameraArmDriver.h************************/
	//define range of motor
	// these defineition need to be config and change everytime using a new set of servo.
	// custom min/max pulse width settings that best suit my servos
	//shoulder
	const int CENTER_SHOULDER= 76;
	const int CW_SHOULDER= 0; // right
	const int CCW_SHOULDER =170; // left
	const int SHOULDER_MIN_PW= 570;//calibrate the servo to get the best fit value.
	const int SHOULDER_MAX_PW =2470;

	//base
	const int CENTER_BASE =87;
	const int CW_BASE =8; // right
	const int CCW_BASE =173; // left
	const int BASE_MIN_PW =570;//calibrate the servo to get the best fit value.
	const int BASE_MAX_PW =2470;

	#define S_OFFSET 0
  	#define S_SPEED 20 // um pwm delay interpret as speed.
	/******************arduino sketches****************/

#elif botConst2 
	/******************Driving.h const************************/
	#define WHEELDIAMETER 2.99 //2017 robot wheel 
	/**
	 * adjust this value until the 2 encoder run at the same rate.
	 * in order this lib to work as expected. 
	 */
	#define R_MOTOR_MAX 98
	#define L_MOTOR_MAX 104
	#define L_TARGET_DIST_OFFSET 0.1
	#define R_TARGET_DIST_OFFSET 0

	#define L_TARGET_ANGLE_OFFSET 5
	#define R_TARGET_ANGLE_OFFSET 4
	//define controller constant
	#define K1 0.438		//LEFT controller constant
	#define K2 0.45743	//RIGHT controller constant
	#define V	0.3//1.3			//speed controller constant
	#define I	0.7		//integral controller constant


	/******************SONAR info*****************************/
	int const sonarOffset[4] = {-2,-1, -2,-1};

	/****************SCC_Driver robot arm info*****************/
	 float  const L2 = 5.7578125f;
	const float L3 = 7.3575f;
	// old gripper #define L4 4.2700  3.9810
	const float L4 = 4.2700f;

	/****************CameraArmDriver.h************************/
	//define range of motor
	// these defineition need to be config and change everytime using a new set of servo.
	// custom min/max pulse width settings that best suit my servos
	//shoulder
	const int CENTER_SHOULDER= 76;
	const int CW_SHOULDER= 0; // right
	const int CCW_SHOULDER =170; // left
	const int SHOULDER_MIN_PW= 570;//calibrate the servo to get the best fit value.
	const int SHOULDER_MAX_PW =2470;

	//base
	const int CENTER_BASE =87;
	const int CW_BASE =8; // right
	const int CCW_BASE =173; // left
	const int BASE_MIN_PW =570;//calibrate the servo to get the best fit value.
	const int BASE_MAX_PW =2470;

	#define S_OFFSET 0
  	#define S_SPEED 20 // um pwm delay interpret as speed.
	/******************arduino sketches****************/

#elif beginnerBot
	
#endif