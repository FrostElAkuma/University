#include <iostream>
using namespace std;

int main(){

int sec, rsec, mins;

cout<<"Please inter the time in minutes:";
cin>>sec;

mins = sec/60;
rsec = sec%60;

cout<<"The time in minutes is:"<<mins<<endl;
cout<<"The remaining seconds are:"<<rsec;

return 0;










}


