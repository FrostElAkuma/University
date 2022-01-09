#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;
//Prototypes
void getHoursRate(double&,double&);
double paycheck(double,double,char&);
void printCheck(double,double,char,double);
//Main function
int main()
{

    char grade;
    double rate, hours;
    double amount;

    getHoursRate(hours,rate);
    amount = paycheck(hours,rate,grade);
    printCheck(hours,rate,grade,amount);

    return 0;
}
//A void returning function that directly initialize our rate and hours.
void getHoursRate(double &hours, double &rate)
{

    cout <<"Enter hours worked: ";
    cin >> hours;

    cout << "Enter pay rate: ";
    cin >> rate;
}
//A function that calculates and returns the amount to be paid
double paycheck(double hours, double rate, char &grade)
{

    double money;

    cout << "Enter level grade [A-C]: ";
    cin >> grade;

    if(hours <= 40)
    {
        money = rate * hours;
    }

    else
    {
        money = rate * 40 + (hours - 40) * (1.5 * rate);
    }


    cout << money;

    if(grade == 'A')
    {
        money += money * 0.1;
    }


    else if (grade == 'B')
    {
        money += money * 0.075;
    }

    else if(grade == 'C')
    {
        money += money * 0.05;
    }


    return money;
}
//A void returning function that just prints details of paycheck
void printCheck(double hours, double rate, char grade, double money)
{
    cout << "\nHours worked " << setw(5)<< hours << endl;
    cout << "Pay Rate: " << setw(8) << rate << "$"<< endl;
    cout << "Grade level: " <<  setw(4) << grade << endl;
    cout << "This week's salary: " << money << "$" << endl;

}

