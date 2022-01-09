//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void DigitsCounter(int, int &, int &, int &, int &);
//main function
int main()
{
    int N, dc, ds, dp, R;
    cout<<"Enter a number: ";
    cin>>N;
    DigitsCounter(N, dc, ds, dp, R);
    cout<<endl;
    cout<<"Total Digits: "<<dc<<endl;
    cout<<"Digits Sum: "<<ds<<endl;
    cout<<"Digits Product: "<<dp<<endl;
    cout<<"Reverse: "<<R<<endl;

    return 0;
}

void DigitsCounter(int N, int &dc, int &ds, int &dp, int &R)
{
    dc = 0;
    ds = 0;
    //Made it equal 1 cuz multiplying by 0 would give us a product of 0
    dp = 1;
    R = 0;

    while(N > 0)
    {
        dc++;
        ds += N % 10;
        dp *= N % 10;
        R = R * 10 + N % 10;
        N /= 10;
    }
}

