#include <iostream>
using namespace std;

int main ()
{
    //Declaring variables
    int num, compareNum, grt = 0, les = 0, eq = 0;
    float avrg;
    //Prompting user for input
    cout<<"Enter the value of the number: ";
    cin>>num;

    cout<<"Enter a number, -999 to stop: ";
    cin>>compareNum;
    //While loop with sentinieal
    while (compareNum != -999)
    {
        //Conditions
        if (compareNum > num)
        {
            grt++;
        }

        else if (compareNum < num)
        {
            les++;
        }

        else
        {
            eq++;
        }

        cout<<"Enter a number, -999 to stop: ";
        cin>>compareNum;
    }
    //Outputing results
    cout<<"There are "<< les <<" numbers less than " << num << endl;
    cout<<"There are "<< grt <<" numbers greater than " << num << endl;
    cout<<"There are "<< eq <<" numbers equal to " << num;

    return 0;
}




