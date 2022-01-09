//Libraries
#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void current_days(int vacation[], int s);
void adjust_days(int vacation[], int s);
//Main function
int main()
{
    int n;
    cout << "Enter the number of employees: " << endl;
    cin >> n;
    int vacation[n];
    cout << endl;
    cout << "Enter the allowed vacation days for employees 1 through " << n << ":" << endl;
    cout << "----------------------------------------------------------" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Vacation of employee " << i + 1 << " is: ";
        cin >> vacation[i];
    }
    cout << endl << endl;
    current_days(vacation, n);
    cout << endl << endl;
    adjust_days(vacation, n);
    cout << "The revised number of vacation days are: " << endl;
    cout << "-----------------------------------------" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Employee number " << i + 1 << " vacation days = ";
        cout << vacation[i] << endl;
    }
    //no errors
    return 0;
}
//Void function that prints amount of vacation left for each employee
void current_days(int vacation[], int num)
{
    for(int i = 0; i < num; i++)
    {
        cout << "Current vacation days for employees ";
        cout << i + 1 << " is " << vacation[i] << endl;
    }
}
//Void returning function that updates vacation time
void adjust_days(int vacation[], int num)
{
    for(int i = 0; i < num; i++)
    {
        if (vacation[i] > 0 && vacation[i] <= 10)
        {
            vacation[i] += 5;
        }

        else if (vacation[i] > 10 && vacation[i] <= 20)
        {
            vacation[i] += 4;
        }

        else
        {
            vacation[i] += 2;
        }
    }
}

