#include "PC_FileIO.c"

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

void writeLetters(TFileHandle &inFile) {
	char reader;
	string words = "";
	string morse[26] = {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--.."};
  int counter = 0;
  int letter = -1;
	while (readCharPC(inFile, reader)) {
		if (reader == 'L' || reader == 'W') {
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
					break;
				case 5:
					// Write F
					break;
				case 6:
					// Write G
					break;
				case 7:
					// Write H
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
					break;
				case 12:
					// Write M
					break;
				case 13:
					// Write N
					break;
				case 14:
					// Write O
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
			counter = 0;
			words = "";
			if (reader == 'L') {
				// Call new letter function
			} else {
				// Call new word function
			}
		} else {
			words = words + reader;
			counter++;
			letter = -1;
		}
	}
}

task main()
{
		TFileHandle outFile;
		bool fileOkay=openWritePC(outFile, "input.rbf");
		displayTextLine(2, "%d", fileOkay);
		

    SensorType[S1] = sensorSoundDBA; // Set up a sound sensor on port S1
    float silentTime = 0; //T1
    float loudTime = 0;           //T2
    int outer=0;
    int const CONVERSION = 1000;




   	while (!getButtonPress(buttonEnter))
    {}
    while (getButtonPress(buttonEnter))
    {}
    while (!getButtonPress(buttonEnter))
   	{
    	clearTimer(T1);
      outer = changeToMorse(outFile, true, loudTime, CONVERSION);
      displayTextLine(1, "%d", outer);
      while (SensorValue[S1]<=15)
      {}
      silentTime = time1[T1];
      clearTimer(T2);
      outer = changeToMorse(outFile, false, silentTime, CONVERSION);
      displayTextLine(1, "%d", outer);
      while (SensorValue[S1]>15)
      {}
      loudTime = time1[T2];
  }
  wait1Msec(1000);
  TFileHandle inFile;
	fileOkay = openReadPC(inFile, "input.rbf");
	

  closeFilePC(inFile);
}
