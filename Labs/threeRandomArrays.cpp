#include <iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
    //declaring our variables
    int a1[10], a2[10], a3[10];

    //A for loop that loops 10 times
    for(int i = 0; i < 10; i++)
    {
        a1[i] = rand() %5 + 1;
        a2[i] = rand() %6 + 5;
        a3[i] = a1[i] + a2[i];
    }
    // Outputting the results
    cout<< "A1:";
    for(int i = 0; i < 10; i++)
    {
        cout<< setw(5) << a1[i];
    }
    cout<< endl << "A2:";
    for(int i = 0; i < 10; i++)
    {
        cout<< setw(5) << a2[i];
    }
    cout<< endl << "A3:";
    for(int i = 0; i < 10; i++)
    {
        cout<< setw(5) << a3[i];
    }

    //No errors
    return 0;
}

