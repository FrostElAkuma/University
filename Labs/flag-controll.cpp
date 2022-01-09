#include <iostream>
using namespace std;

int main ()
{
    //Declaring variables
    int upper = 0, lower = 0, other = 0;
    char c;
    bool flag = false;

    //Prompting user for input
    cout<<"Enter a character, # to quit: ";
    cin>>c;

    if (c == '#')
        {
            flag = true;
        }

    //Flag controlled While loop with
    while (!flag)
    {
        //Conditions

        if (c >= 'a' && c<= 'z')
        {
            lower++;
        }

        else if (c >= 'A' && c<= 'Z')
        {
            upper++;
        }

        else
        {
            other++;
        }

        cout<<"Enter a character, # to quit: ";
        cin>>c;

        if (c == '#')
        {
            flag = true;
        }
    }
    //Outputting results
    cout << "The lower case letters are " << lower << endl;
    cout << "The upper case letters are " << upper << endl;
    cout << "other letters are " << other;

    return 0;
}





