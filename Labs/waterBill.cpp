#include <iostream>
using namespace std;

int main(){


const int subFee = 50;
float waterLiters, waterBill;

cout<<"Enter the number of water liters you consumed: ";
cin>>waterLiters;

waterBill = subFee;

if (waterLiters <= 1000) {
    waterBill += waterLiters * 0.75;
}

else {
    waterBill += (1000 * 0.75) + (waterLiters - 1000) * 1.25;
}

cout<<"The total water bill = "<<waterBill<<" Dirhams"<<endl;


return 0;

}
