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
    void set(double, double, double);
    void findArea();
    double findCircumference()const;
    void print()const;
    Circle(double=1, double=2, double=3);

protected:
    double xCoordinate, yCoordinate, radius, area;

};

class Cone: public Circle
{
public:
    void set(double, double, double, double);
    double findSurfaceArea()const;
    double findVolume()const;
    void print() const;
    Cone(double=1, double=2, double=3, double=4);

private:
    double height;
};
