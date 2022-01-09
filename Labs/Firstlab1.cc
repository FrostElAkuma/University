#include <iostream>
using namespace std;

int main(){

float beforePrice, profitPrice, percent=0.6, finalPrice;

cout<<"What is the original price of the item ?";
 cin>>beforePrice;

 profitPrice = beforePrice * percent;

 finalPrice = beforePrice + profitPrice;

 cout<<"the selling price of the item is " << finalPrice;

 return 0;
}
