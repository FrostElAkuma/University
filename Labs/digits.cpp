#include <iostream>
using namespace std;

int main(){



int twoDigit, firstDigit, secondDigit, answer;

cout<<"Enter a two-digit number: ";
cin>>twoDigit;

secondDigit = twoDigit % 10;
twoDigit = twoDigit / 10;
firstDigit = twoDigit;

cout<<"First digit : "<<firstDigit<<endl;
cout<<"Second digit : "<<secondDigit<<endl;

if (firstDigit > secondDigit) {

    answer = firstDigit + secondDigit;

    cout<<"The sum of the digits = "<<answer<<endl;
}

else {
    answer = firstDigit * secondDigit;


    cout<<"The product of the digits = "<<answer<<endl;
}

return 0;

}

