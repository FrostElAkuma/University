#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototype
int GetMin (int, int, int);
//Main function copied from H.W
int main() {
 srand(time(0));
 int N, a, b, min;
cout<<"Enter values for N, a, and b: ";
 cin>>N>>a>>b;
min = GetMin(N, a, b);
 cout<<"The minimum is: "<<min<<endl;
return 0;
}
//A function that prints the takes N of numbers between a and b and get the sum and average of those N numbers and return the minimum
int GetMin(int N, int a, int b)
{
    int least = 1000000;
    int random[N], sum = 0;
    float average, counter = 0.00;

    cout << "\n\nThe random numbers are: ";

    for (int i = 0; i < N; i++)
    {

        random[i] = (rand() + time(0)) % (b - a + 1) + a;
        cout << random[i] << " ";
        sum += random[i];
        counter ++;

        if (random[i] < least)
        {
            least = random[i];
        }

    }

    cout << "\n\nSum: " << sum << endl;
    cout << "Average: " << setprecision(3) << sum / counter << endl;

    return least;
}
