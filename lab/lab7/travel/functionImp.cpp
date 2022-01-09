#include "header.h"

void Journey::set(int x)
{

    p = new City[x];

    numberOfCities = x;

    cout<< endl <<"Enter the name and travel cost of "<<x<<" cities: ";
    for(int i =0; i < x; i++)
    {
        cin>>p[i].name>>p[i].cost;
    }

    findCost();
}
//finding the total cost of the journey
void Journey::findCost()
{
    double t = 0;

    for(int i = 0; i < numberOfCities; i++)
    {
        t += p[i].cost;
    }

    totalCost = t;
}

//printing values
void Journey::print() const
{
    cout<<"The journey involves visiting the following "<<numberOfCities<<" citties: "<<endl;
    for(int i = 0; i < numberOfCities; i++)
    {
        cout<< " " << p[i].name << " at a travel cost " << p[i].cost << endl;
    }
    cout<<"The total cost of the journey is " << totalCost << endl;
}
//our default parametrized constructor
Journey::Journey(int x)
{

    p = new City[x];

    numberOfCities = x;

    for(int i =0; i < x; i++)
    {
        p[i].name = "Ali Omar";
        p[i].cost = 10;
    }

	findCost();
}

//Our deconstructor
Journey::~Journey() {

    totalCost -= p[numberOfCities].cost;
}
