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
#include <algorithm>  // for min max

using namespace std;

//our class
class Interval
{
    friend ostream& operator<<(ostream&, const Interval&);
	friend istream& operator>>(istream&, Interval&);

public:
    void set(double, double);
    void get(double&, double&) const;
    void print() const;
    Interval operator+=(const Interval&);
    Interval operator++(int);
    Interval(double = 0, double = 0);
private:
    double lower, upper;
};



