#include <iostream>
using namespace std;

int main () {
//declaring the variables
 float w;
//prompt the user for input
 cout<<"Please enter the weight of the package: ";
  cin>>w;
// Evaluating and outputting price based on user input
  if (w <= 0) {
    cout<<"Invalid weight";
  } else if (0 < w && w <= 1){
      cout<<"The shipping cost is 3.5 DHS";
  } else if (1 < w && w <= 3){
      cout<<"The shipping cost is 5.5 DHS";
  } else if (3 < w && w <= 10){
      cout<<"The shipping cost is 8.5 DHS";
  } else if (10 < w && w <= 20){
      cout<<"The shipping cost is 10.5 DHS";
  } else if (w > 50){
      cout<<"The package cannot be shipped.";
  }

 return 0;
}















