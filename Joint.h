#ifndef Joint_H
#define Joint_H

#include <Servo.h>

class Joint{
	
	private:

	int spdH=0;
	int initH=60;
	int endH=120;

	int spdV=0;
	int initV=60;
	int endV=120;

	Servo * motorH;
	Servo * motorV;

	int motorHQ=0;
	int motorVQ=0;

	public:
	
		Joint(); //Constructor of the Joint class
		
		~Joint(); //Destructor of the Joint class
	
		void setRangeH(int init, int endy);//Sets the initial and the end point of the range of the horizontal Servo
		
		void setRangeV(int init, int endy);//Sets the initial and the end point of the range of the horizontal Servo
		
		void setSpeedH(int spd);// Sets the horizontal increment - from 1 to 255 - that regulates the speed of the servo, higher means higher velocity. 
		
		void setSpeedV(int spd);//  Sets the vertical increment - from 1 to 255 - that regulates the speed of the servo, higher means higher velocity. 
		
		void getRangeH(int * init, int * final); // Returns to the user the horizontal range for the articulation ( from 10 to 170).
		
		void getRangeV(int * init, int * final);// Returns to the user the vertical range for the articulation ( from 10 to 170).
		
		int getSpeedH();//Returns the horizontal speed of the servo.
		
		int getSpeedV();//Returns the vertical speed of the servo.
		
		void appendV(int PIN);//Attaches the vertical servo to the PIN variable.
		
		void appendH(int PIN); //Attaches the horizontal servo to the PIN variable.
		
		void left();//Moves the horizontal servo up within the horizontal range.
		
		void right();//Moves the horizontal servo up within the horizontal range.
		
		void up();//Moves the vertical servo up within the vertical range.
		
		void down();//Moves the vertical servo down within the vertical range.
		
		void calibrate(int );
		
		void reset(); //Resets the hexapod to the calibration position of the servos (ortogonal position).

};

#endif
