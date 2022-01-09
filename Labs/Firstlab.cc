#include <iostream>
using namespace std;

int main(){

float monday, tuesday, wednesday, thursday, friday, beforeOdometer, afterOdometer, totalGas, diffMiles, averageMilesGallon;

cout<<" Please inter the amount of gas used on Monday:";
 cin>>monday;

cout<<" Please inter the amount of gas used on Tuesday:";
 cin>>tuesday;

cout<<" Please inter the amount of gas used on Wednesday:";
 cin>>wednesday;

cout<<" Please inter the amount of gas used on Thursday:";
 cin>>thursday;

cout<<" Please inter the amount of gas used on Friday:";
 cin>>friday;

cout<<" Please inter the Odometer reading on Monday before the trip :";
 cin>>beforeOdometer;

cout<<" Please inter the Odometer reading on Friday after the trip :";
 cin>>afterOdometer;

totalGas = monday + tuesday + wednesday + thursday + friday;

diffMiles = afterOdometer - beforeOdometer;

averageMilesGallon = diffMiles / totalGas;

cout<<"your average miles per gallon is "<< averageMilesGallon;

return 0;
}
