#include "header.h"

void Interval::set(double l, double u)
{

    lower = l;
    upper = u;
}


void Interval::get(double &l, double &u) const
{
    l = lower;
    u = upper;
}

void Interval::print() const
{
    cout << "[" << lower << "," << " " << upper << "]";

}

Interval Interval::operator+=(const Interval& intObj)
{
	//Interval tempInt;

	//tempInt.lower = lower + intObj.lower;
	//tempInt.upper = upper + intObj.upper;

	lower += intObj.lower;
	upper += intObj.upper;

	return *this;
}


Interval Interval::operator++(int u)
{
	Interval tempInt = *this;

    lower++;
    upper++;

	return tempInt;
}

ostream& operator<<(ostream& osObject, const Interval& cObject)
{
	osObject << "[" << cObject.lower << "," << " " << cObject.upper << "]";

	return osObject;
}

istream& operator>>(istream& isObject, Interval& cObject)
{
    cout << "Enter the lower and upper boundaries of the first interval: ";
    isObject>>cObject.lower>>cObject.upper;

	return isObject;
}

Interval::Interval(double l, double u)
{

    lower = l;
    upper = u;
}



