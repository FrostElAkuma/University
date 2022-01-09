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
    friend Interval operator-(const Interval&, const Interval&);
    friend Interval operator/(const Interval&, const Interval&);
    friend bool operator!=(const Interval&, const Interval&);

public:
    void set(double, double);
    void get(double&, double&) const;
    void print() const;
    Interval operator+(const Interval&) const;
    Interval operator*(const Interval&) const;
	bool operator==(const Interval&) const;
    Interval(double = 0, double = 0);
private:
    double lower, upper;
};


