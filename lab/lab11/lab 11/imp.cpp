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

Interval Interval::operator+(const Interval& intObj) const
{
	Interval tempInt;

	tempInt.lower = lower + intObj.lower;
	tempInt.upper = upper + intObj.upper;

	return tempInt;
}


Interval Interval::operator*(const Interval& intObj) const
{
	Interval tempInt;
    //Old code that does mot work
	//tempInt.lower = min((lower * intObj.lower), (lower * intObj.upper), (upper * intObj.lower), (upper * intObj.upper));
	//tempInt.upper = max((lower * intObj.lower), (lower * intObj.upper), (upper * intObj.lower), (upper * intObj.upper));
    double a[4];
    a[0]= lower * intObj.lower;
    a[1]= lower * intObj.upper;
    a[2]= upper * intObj.lower;
    a[3]= upper * intObj.upper;
    //Initializing
    tempInt.lower = a[0];
    for(int i=0; i<4; i++)
	{

		if(a[i] < tempInt.lower)

			tempInt.lower = a[i];

		if(a[i] > tempInt.upper)

			tempInt.upper = a[i];

	}


	return tempInt;
}

bool Interval::operator==(const Interval& intObj) const
{
	return (lower == intObj.lower &&
		upper == intObj.upper);
}


Interval operator-(const Interval& firstInt, const Interval& secondInt)
{
	Interval tempInt;

    tempInt.lower = firstInt.lower - secondInt.upper;
    tempInt.upper = firstInt.upper - secondInt.lower;

    return tempInt;

}

Interval operator/(const Interval& firstInt, const Interval& secondInt)
{
	Interval tempInt;
    if (secondInt.lower != 0 && secondInt.upper != 0)
    {
        double a[4];
        a[0]= firstInt.lower / secondInt.lower;
        a[1]= firstInt.lower / secondInt.upper;
        a[2]= firstInt.upper / secondInt.lower;
        a[3]= firstInt.upper / secondInt.upper;
        //Initializing
        tempInt.lower = a[0];
        for(int i=0; i<4; i++)
        {

            if(a[i] < tempInt.lower)

                tempInt.lower = a[i];

            if(a[i] > tempInt.upper)

                tempInt.upper = a[i];

        }
    }

    return tempInt;

}

bool operator!=(const Interval& firstInt, const Interval& secondInt)
{
	return (firstInt.lower != secondInt.lower || firstInt.upper != secondInt.upper);
}


Interval::Interval(double l, double u)
{

    lower = l;
    upper = u;
}


