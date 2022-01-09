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
class student
{
public:
    //Function to set the name and mark.
    //After setting the name and mark, a reference to the object, that is,
    //the address of the object, is returned
    student& set(string, int);
    student& findGrade();
    void print() const;
    student(string="", int=0);
private:
    string name, grade;
    int mark;
};
