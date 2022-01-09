//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
int small(int A[], int, int);
//main function
int main()
{
    int n, i, a[20], x;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";

    for(int j = 0; j < n; j++)
    {
        cin >> a[j];
    }

    cout << "Enter the value of i: ";
    cin >> i;

    x = small(a, n, i);

    cout << "The ";
    switch (i)
    {
        case 1: cout << "1st";
                break;
        case 2: cout << "2nd";
                break;
        case 3: cout << "3rd";
                break;
        default: cout << i << "th";
                 break;
    }

    cout << " small element is: " << x;
    //No errors
    return 0;
}
int small(int arr[], int num, int i)
{
    int tempo;
    //Sorting algo
    for(int j = 0; j < num; j++)
    {
        for(int t = j + 1; t < num - 1; t++)
        {
            if(arr[j] > arr[t])
            {
                tempo = arr[t];
                arr[t] = arr[j];
                arr[j] = tempo;
            }

        }
    }

    return arr[i-1];
}

