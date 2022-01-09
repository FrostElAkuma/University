#include <iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;

int main ()
{   //declaring our variables
    int n;

    cout<<"Random_Num   Squared     Cubed"<<endl;
    //A for loop that loops 10 times
    for(int i = 0; i < 10; i++)
    {
        n = rand() % 11;
        // Outputting the result
        cout<< setw(10) << n << setw(10) << n*n << setw(10) << n*n*n << endl;
    }
    //No errors
    return 0;
}
