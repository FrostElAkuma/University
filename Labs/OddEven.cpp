//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void OddAndEven(int [][3], int&, int&);
//main function
int main()
{
  int Matrix1[2][3] = { {3, 2, 8},
                        {10, 5, 4} };

  int Matrix2[2][3] = { {13, 2, 19},
                        {10, 5, 17} };

    int odd, even;

    cout<<"Matrix1: "<<endl;
    OddAndEven(Matrix1, odd, even);
    cout<<"Odd: "<<odd<<endl;
    cout<<"Even: "<<even<<endl<<endl;

    cout<<"Matrix2: "<<endl;
    OddAndEven(Matrix2, odd, even);
    cout<<"Odd: "<<odd<<endl;
    cout<<"Even: "<<even<<endl;
    //No Errors
    return 0;
}
//Void function that updates the array and other inputs using refrence paramters
void OddAndEven(int arr[][3], int &odd, int &even)
{

    odd = 0;
    even = 0;
    //Nested for loop to loop thro the 2D array
    for (int i = 0; i < 2; i++)
    {
        for( int j = 0; j < 3; j++)
        {
            cout << setw(3)  << arr[i][j];

            if (arr[i][j] % 2 == 0)
            {
                even++;
            }

            else
            {
                odd++;
            }
        }
        cout << endl;
    }
}
