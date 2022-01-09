#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    int matrix[5][5], total = 0, colNum;

    cout<< "A 5x5 matrix filled with random numbers...." << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = (rand() + time(0)) % 11;

            cout<< matrix[i][j] << " ";
        }

        cout<< endl;
    }

    cout<< "Enter the column index for summation: ";
     cin>> colNum;

    for (int i = 0; i < 5; i++)
    {
        total += matrix[i][colNum];
    }

    cout<< "Sum of column " << colNum << " is " << total;

    return 0;
}
