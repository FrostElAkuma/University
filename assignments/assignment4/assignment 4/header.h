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

//our struct
struct Work
{
    string type;
    int hours;
    float fee; //1 hour fee
};
//our class
class Worker
{
    friend ostream& operator<<(ostream&, const Worker&);
	friend istream& operator>>(istream&, Worker&);

public:
    void set(string, int);
    void print() const;
    Worker& operator++();
    const Worker& operator=(const Worker&);
    Worker(string="", int=0);
    ~Worker();
    Worker(const Worker &otherObject);
private:
    void findCost(); //find the cost of all jobs
    string name;
    int numberOfJobs;
    Work *p;
    float cost;
};

