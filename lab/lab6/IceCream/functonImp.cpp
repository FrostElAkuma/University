#include "header.h"
//Setting global constant for pi
const double pi=4*atan(1);
//setting values for the radius inside the cricle
void Circle::set(double r)
{
    radius = r;

    findArea();
}
//finding the area of the circle
void Circle::findArea()
{
    area = pi * (radius * radius);
}
//finding the circumference of the circle
double Circle::findCircumference() const
{
    double c = 2*pi*radius;
    return c;
}
//printing values
void Circle::print() const
{
    cout<<"Cone Properties"<<endl
    <<endl
    <<"Circle Properties"<<endl
    <<"  Radius "<<setw(20)<<radius<<endl
    <<"  Circumference "<<setw(19)<<findCircumference()<<endl
    <<"  Area "<<setw(28)<<area<<endl;
}
//our default parametarized constructor
Circle::Circle(double r)
{

    radius = r;

	findArea();
}

void IceCream::set(string t, int s, double p)
{
    type = t;
    scoops = s;
    price = p;
}

double IceCream::findCost() const
{

    double p = scoops * price;
    return p;
}

void IceCream::print() const
{
    cout<< endl<< "The filling is " << scoops << " scoops of " << type << " ice cream that cost " << findCost() << endl;
}

IceCream::IceCream(string t, int s, double p)
{
    type = t;
    scoops = s;
    price = p;
}

void Cone::set(double r, string t, int s, double p, double h)
{
    Circle::set(r);
    filling.set(t, s, p);
    height = h;
}

double Cone::findSurfaceArea() const
{
    double a = pi*radius*(radius+sqrt(pow(height, 2) + pow(radius, 2)));
    return a;
}

double Cone::findVolume() const
{
    double v = pi*pow(radius, 2)*(height/3);
    return v;

}

void Cone::print() const
{
    Circle::print();
    filling.print();
    cout<<"Cone area "<<setw(25)<<findSurfaceArea()<<endl
    <<"Cone volume "<<setw(23)<<findVolume();
}

Cone::Cone(double r, string t, int s, double p, double h)
    :Circle(r),filling(t,s,p)
{
    height = h;
}

