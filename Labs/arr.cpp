//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void disp_array(int arr1[][3], int arr2[][3]);
void addition_array(int arr1[][3], int arr2[][3], int add[][3]);
void subtract_array(int arr1[][3], int arr2[][3], int subtract[][3]);
//main function
int main()
{
    //Declaring our variables
    int add[3][3], subtract[3][3];

    int arr1[][3] = {{20, 30, 40},
                     {50, 60, 70},
                     {20, 10, 20},};

    int arr2[][3] = {{10, 20, 20},
                     {30, 20, 10},
                     {30, 20, 30},};

    disp_array(arr1, arr2);
    addition_array(arr1, arr2, add);
    subtract_array(arr1, arr2, subtract);
    //No errors
    return 0;
}
//Void function that prints the orignal arrays
void disp_array(int arr1[][3], int arr2[][3])
{
    cout << "Array One is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Array Two is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
//Void function that add same entries from 2 arrays to each other and prints them out in a new array
void addition_array(int arr1[][3], int arr2[][3], int add[][3])
{
    cout << "Addition array is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
            cout << add[i][j] << " ";
        }
        cout << endl;
    }
}
//Void function that subract same entries from 2 arrays from each other and prints them out in a new array
void subtract_array(int arr1[][3], int arr2[][3], int subtract[][3])
{
    cout << "\nSubtraction array is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            subtract[i][j] = arr1[i][j] - arr2[i][j];
            cout << subtract[i][j] << " ";
        }
        cout << endl;
    }
}
