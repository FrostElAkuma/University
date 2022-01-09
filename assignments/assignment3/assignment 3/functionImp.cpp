#include "header.h"

void Arts::Registration(int x)
{
 int fee = 850;
 cout <<endl <<"The fees for a student in the College of Arts for " << x << " credits is: " << fee * x << endl <<endl;
}

void Science::Registration(int x)
{
 int fee = 1200;
 cout <<endl <<"The fees for a student in the College of Science for "<< x <<" credits is: " << fee * x << endl <<endl;
}

void Computing::Registration(int x)
{
 int fee = 1300;
 cout <<endl <<"The fees for a student in the College of Computing for "<< x <<" credits is: " << fee * x << endl <<endl;
}

void Engineering::Registration(int x)
{
 int fee = 1500;
 cout <<endl <<"The fees for a student in the College of Engineering for " << x <<" credits is: " << fee * x << endl <<endl;
}

void Medical::Registration(int x)
{
 int fee = 2600;
 cout <<endl <<"The fees for a student in the College of Medical for "<< x <<" credits is: " << fee * x << endl<<endl;
}
