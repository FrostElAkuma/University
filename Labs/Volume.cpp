#include <iostream>
#include <cmath>
using namespace std;

int main () {
//defining variables
const float pi = 3.14;
double radius,surfaceArea, volume;
//prompt user for input
cout<<"Please enter radius:";
cin>>radius;
//calculations
surfaceArea = 4*pi*pow(radius,2);
volume = (4/3)*pi*pow(radius,3);
//output
cout<<"The value of square root of pi is:"<<sqrt(pi)<<endl;
cout<<"The surface area of the sphere is: "<<surfaceArea<<endl;
cout<<"The volume of the sphere is: "<<volume;

return 0;
}

