#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <sys/time.h>
#include <sys/types.h>
#include <iostream>

using namespace std;

int main()
{

    int led = 9;
    wiringPiSetup () ;
    pinMode(led, OUTPUT);

    for (int i = 0; i < 100; i++){
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        cout << "hello!!!" << endl;
    }

    return 0;
}
