#include <iostream>
using namespace std;


int main () {
//defining variables
string cityA, cityB;
int aTemp1,aTemp2,bTemp1,bTemp2;
float aAvrg, bAvrg;
//prompt user for input
cout<<"Enter name, morning temperature and night temperature of the first city: ";
cin>>cityA>>aTemp1>>aTemp2;

cout<<"Enter name, morning temperature and night temperature of the second city: ";
cin>>cityB>>bTemp1>>bTemp2;
//calculations
aAvrg= (aTemp1 + aTemp2)/2.0;
bAvrg= (bTemp1 + bTemp2)/2.0;

//output
cout<<"The city names and average temperatures are:"<<endl<<cityA<<"\t"<<aAvrg<<endl<<cityB<<"\t"<<bAvrg;


return 0;
}

