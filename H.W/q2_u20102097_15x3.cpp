#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Declaring variables
    char arr[5][4];
    int random, vowels = 0;
    //nested for loop that inserts random upper letters and counts vowels annd prints results
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
           random = (rand() + time(0)) % (90 - 65 + 1) + 65;
           arr[i][j] = random;

           if (arr[i][j] == 'A' || arr[i][j] == 'E' || arr[i][j] == 'I' || arr[i][j] == 'O' || arr[i][j] == 'U')
           {
               vowels++;
           }
           cout << arr[i][j] << " ";

        }

        cout << endl;
    }

    cout << "\nTotal Vowels: " << vowels << endl << endl;
    //Nested for loop that changes vowels to lower case and prints the results
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {

           if (arr[i][j] == 'A' || arr[i][j] == 'E' || arr[i][j] == 'I' || arr[i][j] == 'O' || arr[i][j] == 'U')
           {
               arr[i][j] += 32;
           }
           cout << arr[i][j] << " ";

        }

        cout << endl;
    }

}
