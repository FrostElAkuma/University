#include <iostream>
using namespace std;

int main(){

float feet, inch, cm;

cout<<"please inter the length in feet:";
cin>>feet;

inch = feet*12.00;
cm = inch *2.54;

cout<<"Inches:"<<inch<<endl;
cout<<"Centimeters:"<<cm;

return 0;

}
