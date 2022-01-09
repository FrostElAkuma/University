#include <iostream>
using namespace std;

int main () {
//declaring our integers
  int month;
//prompting user for input
  cout<<"Enter a month number: ";
   cin>>month;
//checking cases and outputting respective outputs
   switch (month) {

    case 12:
    case 1:
    case 2:
     cout<<"Hello ..."<<endl;
     cout<<"This is winter time..."<<endl;
     break;

    case 9:
    case 10:
    case 11:
     cout<<"Hello ..."<<endl;
     cout<<"This is autumn time..."<<endl;
     break;

    case 6:
    case 7:
    case 8:
     cout<<"Hello ..."<<endl;
     cout<<"This is summer time..."<<endl;
     break;

    case 3:
    case 5:
     cout<<"Hello ..."<<endl;
     cout<<"This is spring time..."<<endl;
     break;

    case 4:
     cout<<"Hello ..."<<endl;
     cout<<"This is spring time..."<<endl;
     cout<<"Ramadan starts in April this year."<<endl;

    default:
        cout<< "Invalid month number";

   }

return 0;

}

