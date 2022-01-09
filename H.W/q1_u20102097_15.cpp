//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void timeInHourMinSec(int, int &, int &, int &);
//main function
int main()
{

    int tsec, hours, minutes, seconds;

    cout << "Enter the elapsed time in total seconds: ";
    cin >> tsec;

    timeInHourMinSec(tsec, hours, minutes, seconds);

    cout << "The total time is " << hours << ":" << minutes << ":" << seconds;
    //No errors
    return 0;
}
//Void function with pointers
void timeInHourMinSec(int tsec, int &h, int &m, int &s)
{
    h = tsec / 3600;
    m = tsec % 3600 / 60;
    s = tsec % 3600 % 60;
}

