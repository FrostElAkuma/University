//Libraries
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <math.h>
#include <fstream>

using namespace std;

//our classes
class Student
{
public:
    void set(string, string, string, string);
    void getID(string);
    void get(string&, string&, string&, string&)const;
    void print()const;
    Student(string="", string="", string="", string="");

private:
    string ID, firstName, lastName, major;
};

class Course
{
public:
    void set(string);
    void get(string&, string&, double&)const;
    void print()const;
    Course(string="");

private:
    string code, title;
    double numberOfCredits;
};

class Record
{
public:
    void set(string, string, double, string);
    void get(string&, double&, string&, string&)const;
    void print()const;
    Record(string ="", string ="", double = 0, string="");

private:
    string studentID, courseCode, courseGrade, semesterTaken;
    double courseMark;
};

class Sis {
public:
    void set();
    void studentInformation(string);
    void courseInformation(string);
    Sis();

private:
    int numberOfcourses, numberOfStudents, numberOfRecords;
    Course courses[100];
    Student students[100];
    Record records[100];
};



