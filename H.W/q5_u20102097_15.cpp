#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototype
bool CompareDigits (int , int );

//Our main function
int main(){
 int x, y;
 bool f;
 cout<<"Enter two numbers: ";
 cin>>x>>y;
 f = CompareDigits(x, y);
 if(f == true)
 cout<<"Both numbers are equal length."<<endl;
 else
 cout<<"Numbers have different lengths."<<endl;
 return 0;
}
//Function that takes 2 numbers from user and prints their lengths and returns true or false based on weather they are equal or not
bool CompareDigits(int N1, int N2)
{
    //Declaring our local variables
    int digits1 = 0, digits2 = 0, current1 = N1, current2 = N2;

    while (current1 > 0)
    {
        digits1++;
        current1 = current1 / 10;
    }

    while (current2 > 0)
    {
        digits2++;
        current2 = current2 /10;
    }

cout << endl;
//Outputting results
cout << "Number of digits in " << N1 << " = " << digits1 << endl;
cout << "Number of digits in " << N2 << " = " << digits2 << endl;

return digits1 == digits2;
}
