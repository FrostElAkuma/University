#include <iostream>

using namespace std;

int main ()
{
    //declaring out variables
    int remainingGallon, useGallon, days = 1;
    //Prompting user for input
    cout<< "Enter total available water in gallons: ";
        cin>> remainingGallon;

    cout<< endl;

    cout<< "How many gallons do you want to use: ";
        cin>> useGallon;

    if(useGallon > remainingGallon)
        {
            cout<< "Sorry you can only use : " << remainingGallon << endl;
            remainingGallon = 0;
            cout<< "The remaining gallons of water = 0" << endl;
            cout<< endl;
        }

     else
     {
         remainingGallon = remainingGallon - useGallon;
         cout<< "The remaining gallons of water = " << remainingGallon << endl;
         cout<< endl;
     }
    //While loop that keeps looping as long as our remaining Gallons are not 0
    while(remainingGallon != 0)
    {
        cout<< "How many gallons do you want to use: ";
        cin>> useGallon;

        if(useGallon < remainingGallon)
        {
            days++;
            remainingGallon = remainingGallon - useGallon;
            cout<< "The remaining gallons of water = " << remainingGallon << endl;
            cout<< endl;
        }

        else if(useGallon > remainingGallon)
        {
            days++;
            cout<< "Sorry you can only use : " << remainingGallon << " gallons" << endl;
            remainingGallon = 0;
            cout<< "The remaining gallons of water = 0" << endl;
            cout<< endl;
        }

    }
    //Outputting results
    cout<< "Water is finished after " << days << " days" <<endl;
    //No errors
    return 0;
}

