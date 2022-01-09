#include "header.h"

student& student::set(string n, int m)
{
    name = n;
    mark = m;

    findGrade();

    return *this;
}


student& student::findGrade()
{
    if (mark >= 95) {
        grade = "A";
    }
    else if (mark >= 90) {
        grade = "A";
    }
    else if (mark >= 85){
        grade = "B+";
    }
    else if (mark >= 80){
        grade = "B";
    }
    else if (mark >= 75){
        grade = "C+";
    }
    else if (mark >= 70){
        grade = "C";
    }
    else if (mark >= 65){
        grade = "D+";
    }
    else if (mark >= 60){
        grade = "D";
    }
    else{
        grade = "F";
    }

    return *this;
}

void student::print() const
{
    cout << name << " mark is: " << mark << " and grade is " << grade << endl;
}

student::student(string n, int m)
{
    name = n;
    mark = m;

    findGrade();
}
