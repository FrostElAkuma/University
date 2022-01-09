//Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//our struct
struct course
{
    int credit, mark;
    string code, title;
};

//our class
class student
{
public:
	void set(string, string, int);
	void get(string&, string&, int&, float&)const;
	void print() const;
	void calculateGPA();
	float findWeight(int)const;
	student(string="U654321", string="Omar Ali", int=2);

private:
	string id, name;
	int numberOfCourses;
	float GPA;
	course list[50];
};



