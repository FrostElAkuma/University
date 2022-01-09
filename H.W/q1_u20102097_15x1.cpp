#include <iostream>
using namespace std;

int main () {
//declaring the variables
 int adultNum, adultPrice, childrenNum, childrenPrice;
 float tax, totalCost;
//prompt the user for input
 cout<<"Please enter the number of adult passengers: ";
 cin>>adultNum;

 cout<<"Please enter the price of ticket per adult: ";
 cin>>adultPrice;

 cout<<"Please enter the number of children passengers: ";
 cin>>childrenNum;

 cout<<"Please enter the price of ticket per child: ";
 cin>>childrenPrice;

 cout<<"Enter the tax percent: ";
 cin>>tax;
//calculating total cost
 totalCost = (adultNum*adultPrice + childrenNum*childrenPrice)*tax;
//outputting total cost
 cout<<"The total cost is $ "<<totalCost;

 return 0;
}
