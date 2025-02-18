

task main() {

// i have no idea if these values work
    const int DOT_THRESHOLD = 300;     // Duration threshold for dots in ms
    const int DASH_THRESHOLD = 800;    // Duration threshold for dashes in ms
    const int SOUND_THRESHOLD = 40;    // Minimum sound level to detect a 'signal'

    bool isRecording = false;
    string morseCode = "";
    double soundStartTime, soundDuration;


//soundSensor = S1;

    while (true) 
    {
        // Wait for button press to start or stop recording
        if (getButtonPress() == buttonEnter) 
        {
            isRecording = true;
       

            if (isRecording) 
            {
                clearTimer(T1);
                clearDisplay();
                displayCenteredTextLine(2, "Robot is Recording:");
                morseCode = "";  // Clear previous Morse code
            } 
            else 
            {
                displayCenteredTextLine(2, "Recording is Stopped");
                displayCenteredTextLine(4, morseCode);  // Display the final Morse code
            }
        }

        // Recording stuff
        if (isRecording) 
        {
            if (SensorValue[soundSensor] > SOUND_THRESHOLD) 
            {
                // store the start time of when sound is detected
                soundStartTime = time1[T1];  

                // detect sound
                while (SensorValue[soundSensor] > SOUND_THRESHOLD) {}

                // duration of the sound
                soundDuration = time1[T1] - soundStartTime;

                // sort the sound that is detected
                if (soundDuration < DOT_THRESHOLD) 
                {
                    morseCode += ".";  // Dot
                } 
                else if (soundDuration < DASH_THRESHOLD) 
                {
                    morseCode += "-";  // Dash
                } 
                else 
                {
                    morseCode += " ";  // Space for longer pauses between words
                }
            }
        }
    }
}
