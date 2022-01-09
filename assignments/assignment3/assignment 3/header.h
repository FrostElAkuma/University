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
class College
{
public:
    virtual void Registration(int);
};

class Arts : public College
{
public:
    void Registration(int);
};

class Science : public College
{
public:
    void Registration(int);
};

class Computing : public College
{
public:
    void Registration(int);
};

class Engineering : public College
{
public:
    void Registration(int);
};

class Medical : public College
{
public:
    void Registration(int);
};
