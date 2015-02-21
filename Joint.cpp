#include <Servo.h>
#include "Joint.h"

#define steptime 0.01

Joint::Joint(){
}

Joint::~Joint(){
}


void Joint::setRangeH(int init,int endy){

	initH=init;
	endH=endy;

	return;
}

void Joint::setRangeV(int init,int endy){

	initV=init;
	endV=endy;

	return;
}

void Joint::setSpeedH(int spd){

	spdH=spd;

	return;
}

void Joint::setSpeedV(int spd){

	spdV=spd;

	return;
}

void Joint::getRangeH(int *init, int *endy){

	*init= initH;
	*endy= endH;

	return;
}

void Joint::getRangeV(int * init, int * endy){

	*init= initV;
	*endy= endV;

	return ;
}

int Joint::getSpeedH(){

	return spdH;
}

int Joint::getSpeedV(){

	return spdV;
}

void Joint::left(){

	float step=spdH*steptime;

	for(float i=endH; i>initH;i-=step){
		motorH.write(i);
		//delay(steptime);
	}

	return;
}

void Joint::right(){

	float step=spdH*steptime;

	for(float i=initH; i<endH; i+=step){
		motorH.write(i);
		//delay(steptime);
	}

	return;
}

void Joint::up(){

	float step=spdV*steptime;

	for(float i=initV;i<endV;i+=step){
		motorV.write(i);
		//delay(steptime);
	}

	return;
}

void Joint::down(){

	float step=spdV*steptime;

	for(float i=endV;i>initV;i-=step){
		motorV.write(i);
		//delay(steptime);
	}

	return;
}

void Joint::reset(){

	if(motorHQ== 0){
		motorV.write(90);
		return;
	}

	motorV.write(90);
	motorH.write(90);

	return;
}


///////////////////////////////////////
/////// NEW AUXILIARY FUNCTIONS ///////
///////////////////////////////////////
/*
int Joint::initH(){


}

int Joint::endH(){


}

int Joint::initV(){


}

int Joint::endV(){

	
}*/