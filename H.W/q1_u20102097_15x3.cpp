#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 //Our variables
 int lower, upper, number, lessThan = 0, random[100];
 float average = 0.00, total = 0.00;
 //Prompting user for input
 cout << "Enter an integer: ";
  cin >> number;

 cout << "Enter the lower and upper bonds: ";
  cin >> lower >> upper;

 cout << "The random numbers are";
 //Getting the random numbers and outputting them
 for (int i = 0; i < number; i++)
 {
        if(i % 7 == 0)
        {
            cout << endl;
        }

        random[i] = (rand() + time(0)) % (upper - lower + 1) + lower;
        total += random[i];
        cout << "  " << random[i];
 }
 //Getting the average
 average = total / number;
 //finding numbers less than average
 for (int j = 0; j < number; j++)
 {
     if (random[j] < average)
     {
         lessThan++;
     }
 }
 //Outputting results
 cout << "\nThe average is " << average << endl;
 cout << "There are " << lessThan << " numbers less than the average" << endl;
 //No errors
 return 0;
}

