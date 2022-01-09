//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
int CountAndReplace(char []);
//main function
int main()
{
    char c[200];
    int count;

    cout<<"Enter some text: ";
    cin.get(c, 200);

    count = CountAndReplace(c);

    cout<<endl;

    cout<<"Lowercase words: "<<count<<endl;
    cout<<"New line: "<<c<<endl;
    //No errors
    return 0;
}
//value returning function that RETURNS the number of lower case words and capitalize the first letter
int CountAndReplace(char text[])
{

    int num = 0;
    //Checking the first word
    if (text[0] >= 'a' && text[0] <= 'z')
    {
        num++;
        text[0] = text[0] - 32;
    }
    //Checking the rest of the words
    for (int i = 1; i < strlen(text); i++)
    {
        if (text[i] == ' ' && (text[i+1] >= 'a' && text[i+1] <= 'z'))
        {
            num++;
            text[i+1] = text[i+1] - 32;
        }
    }

    return num;
}


