#include <Servo.h>

#include "Joint.h" 

#define SPDH 0
#define INITH 60
#define endyH 120
#define SPDV 0
#define INITV 60
#define endyV 120



Joint::Joint(){
	motorH= new Servo();
	motorV= new Servo();
}

Joint::~Joint(){
	delete motorH;
	delete motorV;
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

void Joint::appendH(int PIN){
	motorH->attach(PIN);
	motorHQ=1;
}

void Joint::appendV(int PIN){
	motorV->attach(PIN);
	motorVQ=1;
}

void Joint::left(){
	int tempoatual = millis();
	bool chegou = false;

	while (chegou==false){
		if (tempoatual-){

		}
	}

	for(int i=endH; i>initH;i-=spdH){
		
		motorH->write(i);
	}

	return;
}

void Joint::right(){
	for(int i=initH; i<endyH; i+=spdH){
		motorH->write(i);
	}

	return;
}

void Joint::up(){
	for(int i=initV;i<endV;i+=spdV){
		motorV->write(i);
	}

	return;
}

void Joint::down(){
	for(int i=endV;i>initV;i+=spdV){
		motorV->write(i);
	}

	return;
}
	
void Joint::reset(){
	if(motorHQ== 0){
		motorV->write(90);
		return;
	}
	motorV->write(90);
	motorH->write(90);

	return;
}
	
	
