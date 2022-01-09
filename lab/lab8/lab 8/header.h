//Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <math.h>
#include <cassert>

using namespace std;

//our classes
class Student
{
public:
    void set(string, string, double);
    void getMark(double&) const;
    void get(string&, string&, double&) const;
    void print() const;
    Student(string="", string="", double = 0);
private:
    string name, department;
    double mark;

};

class Section
{
public:
    void set(string, int);
    void print()const;
    double average() const;
    Section(string = "", int = 0);
    ~Section();
    Section(const Section &otherObject);

private:
    string number;
    int numberOfStudents;
    Student *p;

};


