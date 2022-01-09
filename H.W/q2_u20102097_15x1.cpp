#include <iostream>
using namespace std;

int main () {
//declaring the variables
 int bulbWatt = 60, hours, energy;
 float kiloWatt;
//prompt the user for input
 cout<<"Please enter the number of hours the light is kept switched on: ";
 cin>>hours;
//calculating energy
 energy = bulbWatt*hours;
//outputting energy
 cout<<"The amount of energy consumed in Watt hours is "<<energy<<" Wh"<<endl;
//calculating kilo watt
 kiloWatt = energy / 1000.00;
//outputting kilowatt
 cout<<"The amount of energy consumed in kilowatt hour is "<<kiloWatt<<" kWh";

 return 0;
}

