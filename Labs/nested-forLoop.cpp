#include <iostream>
using namespace std;

int main ()
{
    //Declaring variables
    int n, m;

    //Prompting user for input
    cout<<"Enter integer n and m : ";
    cin>> n >> m;

    cout << "The indices for " << n << " x " << m << " matrix are " << endl;

    //Nested for loop
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< i << j << " ";
        }
        cout<<endl;
    }

    return 0;
}






