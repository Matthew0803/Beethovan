#include "PC_FileIO.c"
void writeH(float CONVX, float CONVZ)
{
	int currentX = nMotorEncoder[motorA];
	int currentZ = nMotorEncoder[motorC];
	motor[motorC] = -20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(2*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	motor[motorA]=-20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX)<(1*CONVX))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorA]=0;
	wait1Msec(50);
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	currentZ = nMotorEncoder[motorC];
	motor[motorC] = -20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(2*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	currentX = nMotorEncoder[motorA];
	motor[motorA]=20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX)<(1*CONVX))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorA]=0;
	wait1Msec(50);
	currentZ = nMotorEncoder[motorC];
	motor[motorC]=20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentZ)<(1*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
}
void writeE(float CONVX, float CONVZ)
{
	int currentX = nMotorEncoder[motorA];
	int currentY = nMotorEncoder[motorC];
	motor[motorA] = -20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorA] = 20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorC] = -20;
	currentY = nMotorEncoder[motorC];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentY) < (1*CONVZ))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorC] = 0;
	wait1Msec(50);
	motor[motorA] = -20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorA] = 20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorC] = -20;
	currentY = nMotorEncoder[motorC];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentY) < (1*CONVZ))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorC] = 0;
	wait1Msec(50);
	motor[motorA] = -20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorA] = 20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*CONVX))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	motor[motorC] = 20;
	currentY = nMotorEncoder[motorC];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentY) < (2*CONVZ))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorC] = 0;
}
void writeL(float CONVX, float CONVZ)
{
	int currentX = nMotorEncoder[motorA];
	int currentZ = nMotorEncoder[motorC];
	motor[motorC]=-20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC])<(2*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
	wait1Msec(50);
	motor[motorA]=-20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA] - currentX)<(1*CONVX))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorA]=0;
	wait1Msec(1000);
	motor[motorA]=20;
	currentX = nMotorEncoder[motorA];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA] - currentX)<(1*CONVX))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorA]=0;
	wait1Msec(50);
	motor[motorC]=20;
	currentZ = nMotorEncoder[motorC];
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC] - currentZ)<(2*CONVZ))
	{
		if(time1[T1]>20000)
		{
			displayTextLine(5,"error");
			wait1Msec(2000);
			return;
		}
	}
	motor[motorC]=0;
}
void writeO(float convx, float convz)
{
	int currentX = nMotorEncoder[motorA];
	int currentY = nMotorEncoder[motorC];
	motor[motorC] = -20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentY) < (2*convz))
		{
				if(time1[T1]>20000)
				{
					displayTextLine(5,"error");
					wait1Msec(2000);
					return;
				}
		}
	motor[motorC] = 0;
	wait1Msec(50);
	currentY = nMotorEncoder[motorC];
	motor[motorA] = -20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*convx))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
	wait1Msec(50);
	currentX = nMotorEncoder[motorA];
	motor[motorC] = 20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorC]-currentY) < (2*convz))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorC] = 0;
	wait1Msec(50);
	motor[motorA] = 20;
	clearTimer(T1);
	while(abs(nMotorEncoder[motorA]-currentX) < (1*convx))
		{
			if(time1[T1]>20000)
			{
				displayTextLine(5,"error");
				wait1Msec(2000);
				return;
			}
		}
	motor[motorA] = 0;
}

void configureAllSensors() {
	SensorType[S2] = sensorEV3_Touch;
	wait1Msec(50);
	SensorType[S1] = sensorSoundDBA;
	wait1Msec(50);
}

void penUp() {
	motor[motorB] = 20;
	wait1Msec(500);
	motor[motorB] = 0;
	wait1Msec(50);
}

void penDown() {
	motor[motorB] = -20;
	while(SensorValue[S2]==0) {}
	motor[motorB] = 0;
	wait1Msec(50);
}

void moveLetter(float convx) {
	int currentX = nMotorEncoder[motorA];
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (1.5*convx)) {}
	motor[motorA] = 0;
	wait1Msec(50);
}

void moveWord(float convx) {
	int currentX = nMotorEncoder[motorA];
	motor[motorA] = -20;
	while(abs(nMotorEncoder[motorA]-currentX) < (3*convx)) {}
	motor[motorA] = 0;
	wait1Msec(50);
}

void newLine(float moveX, float convz) {
	motor[motorA] = 20;
	int currentX = nMotorEncoder[motorA];
	while(abs(nMotorEncoder[motorA] - currentX) < moveX) {}
	motor[motorA] = 0;
	wait1Msec(50);
	int currentZ = nMotorEncoder[motorC];
	motor[motorC] = -20;
	while(abs(nMotorEncoder[motorC]-currentZ) < (3*convz)) {}
	motor[motorC] = 0;
	wait1Msec(50);
}

int changeToMorse(TFileHandle &outFile, bool sound, int length, float conversion) {
	if (sound) {
		if (length <= 1.5 * conversion) {
			writeCharPC(outFile, '.');
			return 11;
		} else if (length >= 2.5 * conversion) {
			writeCharPC(outFile, '-');
			return 13;
		}
	} else {
		if (length <= 1.5 * conversion) {
			writeCharPC(outFile, ' ');
			return 1;
		} else if (length >= 6.5 * conversion) {
			writeCharPC(outFile, ' ');
			writeCharPC(outFile, 'W');
			writeCharPC(outFile, ' ');
			return 7;
		} else if (length >= 2.5 * conversion) {
			writeCharPC(outFile, ' ');
			writeCharPC(outFile, 'L');
			writeCharPC(outFile, ' ');
			return 3;
		}
	}
	return 0;
}

void writeLetters(TFileHandle &inFile, float convx, float convz) {
	char reader;
	string words = "";
	string morse[26] = {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--.."};
  int letter = -1;
  int letterCount = 0;
  bool firstLetter = true;
	while (readCharPC(inFile, reader)) {
		if (reader == 'L' || reader == 'W') {
			letterCount++;
			if (letterCount > 6) {
				penUp();
				newLine(((letterCount*1.5-1)*convx), convz);
				penDown();
				letterCount = 1;
			}
			displayTextLine(1, words);
			wait1Msec(2000);
			for (int i = 0; i < 26; i++) {
				if (words == morse[i]) {
					letter = i;
				}
			}
			switch(letter) {
				case 0:
					// Write A
					break;
				case 1:
					// Write B
					break;
				case 2:
					// Write C
					break;
				case 3:
					// Write D
					break;
				case 4:
					// Write E
					displayTextLine(1, "E");
					writeE(convx, convz);
					wait1Msec(2000);
					break;
				case 5:
					// Write F
					break;
				case 6:
					// Write G
					break;
				case 7:
					// Write H
					displayTextLine(1, "H");
					writeH(convx, convz);
					wait1Msec(2000);
					break;
				case 8:
					// Write I
					break;
				case 9:
					// Write J
					break;
				case 10:
					// Write K
					break;
				case 11:
					// Write L
					displayTextLine(1, "L");
					writeL(convx, convz);
					wait1Msec(2000);
					break;
				case 12:
					// Write M
					break;
				case 13:
					// Write N
					break;
				case 14:
					// Write O
					displayTextLine(1, "O");
					writeO(convx,convz);
					wait1Msec(2000);
					break;
				case 15:
					// Write P
					break;
				case 16:
					// Write Q
					break;
				case 17:
					// Write R
					break;
				case 18:
					// Write S
					break;
				case 19:
					// Write T
					break;
				case 20:
					// Write U
					break;
				case 21:
					// Write V
					break;
				case 22:
					// Write W
					break;
				case 23:
					// Write X
					break;
				case 24:
					// Write Y
					break;
				case 25:
					// Write Z
					break;
				default:
					break;
			}
			words = "";
			if (!firstLetter) {
				if (reader == 'L') {
					penUp();
					moveLetter(convx);
					penDown();
				} else {
					penUp();
					moveWord(convx);
					letterCount++;
					penDown();
				}
			}
			firstLetter = false;
			} else {
			words = words + reader;
			letter = -1;
		}
	}
}

task main()
{
		TFileHandle outFile;
		bool fileOkay=openWritePC(outFile, "input.rbf");
		displayTextLine(2, "%d", fileOkay);
		const float RADX=1;
		const float RADZ=0.4;
		const float CONVX=2/((2*PI*RADX)/360);
		const float CONVZ=2/((2*PI*RADZ)/360);
    float silentTime = 0;	//T1
    float loudTime = 0;		//T2
    int outer=0;
    int const CONVERSION = 500;
		configureAllSensors();




   	while (!getButtonPress(buttonEnter))
    {}
    while (getButtonPress(buttonEnter))
    {}
	  while (SensorValue[S1]<=15)
		{
     	if (getButtonPress(buttonEnter)) {
     		break;
	   	}
    }
    silentTime = time1[T1];
    while (!getButtonPress(buttonEnter))
   	{
      clearTimer(T2);
      outer = changeToMorse(outFile, false, silentTime, CONVERSION);
      displayTextLine(1, "%d", outer);
      while (SensorValue[S1]>15)
      {
      	if (getButtonPress(buttonEnter)) {
      		break;
      	}
      }
      loudTime = time1[T2];
      clearTimer(T1);
      outer = changeToMorse(outFile, true, loudTime, CONVERSION);
      displayTextLine(1, "%d", outer);
      while (SensorValue[S1]<=15)
      {
      	if (getButtonPress(buttonEnter)) {
      		break;
      	}
      }
      silentTime = time1[T1];
  }
  wait1Msec(1000);
	writeCharPC(outFile, 'L');
  TFileHandle inFile;
	fileOkay = openReadPC(inFile, "input.rbf");
	displayTextLine(2, "%d", fileOkay);
	penDown();
	writeLetters(inFile, CONVX, CONVZ);
	penUp();

  closeFilePC(inFile);
}
