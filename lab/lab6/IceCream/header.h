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

//our classes
class Circle
{
public:
    void set(double);
    void findArea();
    double findCircumference()const;
    void print()const;
    Circle(double=3);

protected:
    double radius, area;

};

class IceCream
{
public:
    void set(string, int, double);
    double findCost()const;
    void print()const;
    IceCream (string = "vanilla", int = 2, double = 5);

private:
    string type;
    int scoops;
    double price;
};

class Cone: public Circle
{
public:
    void set(double, string, int, double, double);
    double findSurfaceArea()const;
    double findVolume()const;
    void print() const;
    Cone(double=3, string = "vanilla", int = 2, double = 5, double=4);

private:
    double height;
    IceCream filling;

};

