#include <iostream>
using namespace std;

int main ()
{
    //Declaring variables
    int pop, age, numOfAdults = 0, sumAge = 0;
    float avrg;
    //Prompting user for input
    cout<<"Enter the size of population sample: ";
    cin>>pop;
    //for loop to get all the population age
    for(int i = 0; i < pop; i++)
    {
        cout<<"Enter the age of person #"<<i + 1<<" :";
        cin>>age;

        if (age >= 18)
        {

        numOfAdults++;
        sumAge += age;

        }
    }
    //Outputing results
    avrg = sumAge / numOfAdults;
    cout<<"There are "<< numOfAdults <<" adults in the population sample." << endl;
    cout<<"The average age of adults is: "<< avrg;

    return 0;
}



