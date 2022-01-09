#include <iostream>

using namespace std;

int main ()
{
    //declaring out variables
    int num, oddNum = 0, evenNum = 0, save;
    //Prompting user for input
    cout<< "Enter an integer number: ";
        cin>> num;
    cout<< endl;
     //Saving out original number
     save = num;
    //While loop that keeps looping as long as our num is not 0
    while(num != 0)
    {
        if(num %10 %2 == 0)
        {
            evenNum++;
        }

        else
        {
            oddNum++;
        }

        num = num / 10;
    }
    //Outputting results
    cout<< "The input number " << save << " has:" << endl;
    cout<< "_____ " << evenNum << " even digits" << endl;
    cout<< "_____ " << oddNum << " odd digits";
    //No errors
    return 0;
}
