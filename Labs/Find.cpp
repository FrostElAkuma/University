//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void Initialize(int [], int);
void Print(int [], int);
int Find(int [], int, int);
//main function
int main()
{
    srand(time(0));

    int list[10], N, loc;

    Initialize(list, 10);

    cout<<"Array: ";
    Print(list, 10);
    cout<<endl;

    cout<<"Enter a number: ";
    cin>>N;

    loc = Find(list, 10, N);

    if(loc == -1)
        cout<<endl<<N<<" was not found\n";
    else
        cout<<endl<<N<<" was found at location "<<loc<<endl;
    //No errors
    return 0;
}
//Our 2 void functions and 1 value returning function
void Initialize(int arr[], int num)
{

    for (int i =0 ; i < num; i++)
    {
        arr[i] = (rand() + time(0)) % 61 + 20;
    }
}


void Print(int arr[], int num)
{

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int Find(int arr[], int num, int wtv)
{

    int check = - 1;

    for (int i = 0; i < num; i++)
        {
            if (arr[i] == wtv)
            {
                check = i;
                break;
            }
        }

    return check;
}

