/*
    Use ctrl+c for get out of program.
    it may not work on all devices.
    time delay is in comment so remove comment marks and try.
*/
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;

void displayClock()
{
    system("clear");  // For windows use 'cls' instead of 'clear'

    cout << setfill(' ') << setw(42) <<"TIMER\n";

    cout << setfill(' ') << setw(53) << "--------------------------\n";

    cout << setfill(' ') << setw(27);

    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";

    cout << setfill('0') << setw(2) << minutes << " min | ";

    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;

    cout << setfill(' ') << setw(53) << " --------------------------\n";
}



void timer()
{
    while (true)
    {
        // display the timer
        displayClock();

        // sleep system call to sleep
        // for 1 second
        sleep(1);  // Maybe it'll not work in your system.

        // increment seconds
        seconds++;
        // if seconds reaches 60

        if (seconds == 60) {  // If seconds reaches 60
            minutes++;
            if (minutes == 60) {  // If minutes reaches 60
                hours++;
                minutes = 0;
            }
            seconds = 0;
        }
    }
}

int main()
{

    // start timer from 00:00:00

    timer();

    return 0;
}
