//Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <math.h>

using namespace std;

//our struct
struct City
{
public:
    string name;
    double cost;

};
//our class
class Journey
{
public:
    void set(int);
    void print()const;
    void findCost();
    Journey (int = 1);
    ~Journey();

private:
    int numberOfCities;
    City *p;
    double totalCost;

};



