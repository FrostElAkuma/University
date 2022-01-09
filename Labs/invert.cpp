#include <iostream>

using namespace std;
//Declaring the user defined function so main can use it
int invert(int);

int main()
{
    int num, invertNum = 0;

    cout << "Enter an integer: ";
     cin >> num;

    invertNum = invert(num);

    cout << "The integer is " << num << " and its inverse is " << invertNum << endl;
     //No errors
     return 0;
}
//Function for inversing a number
int invert(int number)
{
    //Variable to save our new inverse number at
    int r = 0;
    while (number > 0)
    {
        r = r * 10 + number % 10;
        number = number / 10;
    }
    return r;
}
