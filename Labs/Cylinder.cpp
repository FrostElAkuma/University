#include <iostream>

using namespace std;
//Declaring the user defined function so main can use it
double baseArea(double);
double Volume(double, double);

const double PI = 3.14159;

int main()
{
    double rad, height, volume;

    cout << "Enter the radius and height of the cylinder: ";
     cin >> rad >> height;

    volume = Volume(rad, height);

    cout << "The cylinder volume is " << volume << endl;
     //No errors
     return 0;
}

//Function for getting base Area
double baseArea(double rad)
{
    double baseA = PI * rad * rad;
    return baseA;
}

//Function for getting volume
double Volume(double rad, double height)
{
    double area = baseArea(rad);
    return area * height;
}
