#include "header.h"

const double pi=4*atan(1);

void Circle::set(double x, double y, double r)
{
    xCoordinate = x;
    yCoordinate = y;
    radius = r;

    findArea();
	findCircumference();
}

void Circle::findArea()
{
    area = pi * (radius * radius);
}

double Circle::findCircumference() const
{
    double c = 2*pi*radius;
    return c;
}

void Circle::print() const
{
    cout<<"Cone Properties"<<endl
    <<endl
    <<"Circle Properties"<<endl
    <<"  Radius "<<setw(20)<<radius<<endl
    <<"  Circumference "<<setw(19)<<findCircumference()<<endl
    <<"  Area "<<setw(28)<<area<<endl;
}

Circle::Circle(double x, double y, double r)
{
	xCoordinate = x;
    yCoordinate = y;
    radius = r;

	findArea();
	findCircumference();
}

void Cone::set(double x, double y, double r, double h)
{
    Circle::set(x, y, r);

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
    cout<<"Cone area "<<setw(25)<<findSurfaceArea()<<endl
    <<"Cone volume "<<setw(23)<<findVolume();
}

Cone::Cone(double x, double y, double r, double h)
    :Circle(x, y, r)
{
    height = h;
}
