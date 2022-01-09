#include <iostream>
using namespace std;

int main () {
//declaring our integers
  int code, quantity;
//prompting user for input
  cout<<"Enter the code and quantity of the item you want to buy: ";
   cin>> code >> quantity;
//checking cases and outputting respective outputs
   switch (code) {

    case 1:

     cout<<"The amount due is: "<<quantity * 6.49 <<endl;
     break;

    case 2:

     cout<<"The amount due is: "<<quantity * 10.50 <<endl;
     break;

    case 3:

     cout<<"The amount due is: "<<quantity * 9.99 <<endl;
     break;

    case 4:

     cout<<"The amount due is: "<<quantity * 15.00 <<endl;
     break;

    case 5:

     cout<<"The amount due is: "<<quantity * 21.50 <<endl;

    default:
        cout<< "Invalid code";

   }

return 0;

}

