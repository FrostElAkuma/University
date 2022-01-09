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
class Test
{
public:
    void set(int);
    void insertAt(int, float);
    void print() const;
    Test(int=0);
    ~Test();
    //Test(const Test &otherObject);
private:
    int length;
    float *p;
};
