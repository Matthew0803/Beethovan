#include <iostream> 
#include <windows.h> // WinApi header 
using namespace std;
//cin.get(); // wait 

int main() 
{ 
    const int HERTZ=1000;
    const int TIME=1000;
    Beep(HERTZ,TIME);//h
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    Beep(0,TIME);
        
    Beep(0,TIME*3);
    
    Beep(HERTZ,TIME);//e
    
    Beep(0,TIME*3);
    
    Beep(HERTZ,TIME);//l
    Beep(0,TIME);
    Beep(HERTZ,TIME*3);
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    
    Beep(0,TIME*3);
    
    Beep(HERTZ,TIME);//l
    Beep(0,TIME);
    Beep(HERTZ,TIME*3);
    Beep(0,TIME);
    Beep(HERTZ,TIME);
    Beep(0,TIME);
    Beep(HERTZ,TIME);

    Beep(0,TIME*3);

    Beep(0,TIME*3);
    Beep(0,TIME);
    Beep(0,TIME*3);
    Beep(0,TIME);
    Beep(0,TIME*3);
    return 0; 
}