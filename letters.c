const float RADIUS = 2.75;
const float CONVERSION = (2*PI*RADIUS)/360;

// ABC = XYZ



void writeH(float CONV)
{
	int currentX = nMotorEncoder[motorA];
	int currentZ = nMotorEncoder[motorC];
	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(2*CONV))
	{}
	motor[motorC]=0;
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONV))
	{}
	motor[motorC]=0;
	motor[motorA]=20;
	while(abs(nMotorEncoder[motorA]-currentX)<(1*CONV))
	{}
	motor[motorA]=0;
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONV))
	{}
	motor[motorC]=0;
	currentZ = nMotorEncoder[motorC];
	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(2*CONV))
	{}
	motor[motorC]=0;
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONV))
	{}
	motor[motorC]=0;
	currentX = nMotorEncoder[motorA];
	motor[motorA]=-20;
	while(abs(nMotorEncoder[motorA]-currentX)<(1*CONV))
	{}
	motor[motorA]=0;
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONV))
	{}
	motor[motorC]=0;
}


void writeE(float CONV)
{
	void writeE()
{
	int currentX = nMotorEncoder[motorA];
	int currentY = nMotorEncoder[motorC];
	
	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;
	
	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentX) < (1*conv)) {}
	motor[motorC] = 0;
	
	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorC]-currentY) < (1*conv)) {}
	motor[motorC] = 0;
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;

	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentX) < (1*conv)) {}
	motor[motorC] = 0;

	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorC]-currentY) < (1*conv)) {}
	motor[motorC] = 0;
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;

	
}
}


void writeL()
{
	currentX = nMotorEncoder[motorA];
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=-20;
	while(abs(nMotorEncoder[motorC])<CurrentZ+(2*CONV)
	{}
	motor[motorC]=0;
	wait1Msec(50);
	motor[motorA]=20;
	while(abs(nMotorEncoder[motorA]<CurrentX+(2*CONV)
	{}
	motor[motorA]=0;
	wait1Msec(1000);
	motor[motorA]=-20;
	while(abs(nMotorEncoder[motorA])<CurrentX+(2*CONV)
	{}
	motor[motorA]=0;
	wait1Msec(50);
	motor[motorC]=20;
	while(abs(nMotorEncoder[motorC]<CurrentZ+(2*CONV)
	{}
	motor[motorC]=0;
}

void writeO(float conv) {
	int currentX = nMotorEncoder[motorA];
	int currentY = nMotorEncoder[motorC];
	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentY) < (2*conv)) {}
	motor[motorC] = 0;
	currentY = nMotorEncoder[motorC];
	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;
	currentX = nMotorEncoder[motorA];
	motor[motorC] = 20;
	while(abs(nMotorEncoder[motorC]-currentY) < (2*conv)) {}
	motor[motorC] = 0;
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1*conv)) {}
	motor[motorA] = 0;
}

void configureAllSensors() {
	SensorType[S1] = sensorEV3_Touch;
	wait1Msec(50);
	//set up NXT sound sensor
}

void penUp() {
	motor[motorB] = 50;
	wait1Msec(1000);
	motor[motorB] = 0;
}

void penDown() {
	motor[motorB] = -50;
	while(SensorValue[S1]==0) {}
	motor[motorB] = 0;
}

void moveLetter(float conv) {
	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1.5*conv)) {}
	motor[motorA] = 0;
}

void moveWord(float conv) {
	motor[motorA] = 20;
	while(abs(nMotorEncoder[motorA]-currentX) < (2.5*conv)) {}
	motor[motorA] = 0;
}

task main()
{
}
