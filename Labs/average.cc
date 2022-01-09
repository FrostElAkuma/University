#include <iostream>
using namespace std;

int main () {

float a,b,c,d,avrg;

cout<<"please enter integer a:";
cin>>a;
cout<<"please enter integer b:";
cin>>b;
cout<<"please enter integer c:";
cin>>c;
cout<<"please enter integer d:";
cin>>d;

avrg= (a+b+c+d)/4.0;

cout<<"the average is:"<<avrg<<endl;
cout<<"the difference between integer a and the average is:"<< a-avrg<< endl;
cout<<"the difference between integer b and the average is:"<< b-avrg<< endl;
cout<<"the difference between integer c and the average is:"<< c-avrg<< endl;
cout<<"the difference between integer d and the average is:"<< d-avrg<< endl;

return 0;
}
