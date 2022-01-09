#include "Product.h"

//Important to initialize static data
double Product::totalCost =0;

void Product::set(string a, string b, int x) {

    string nam;
    int quantit, pric;

    name = a;
    code = b;
    numberOfComponents = x;
    //prompting user for input
    for(int i = 0; i < x; i++) {
        cout<<"Enter the name, quantity, and unit price of component number "<<i+1<<": ";
        cin>>nam>>quantit>>pric;

        list[i].name = nam;
        list[i].quantity = quantit;
        list[i].price = pric;
    }
    calculateCost();
    totalCost += cost - 10; // If they use set on the object we need to subtract the initial cost value
}

void Product::get(string &a, double &x)const {

    a = code;
    x = cost;

}

void Product::calculateCost() {
    //Getting the cost
    cost = 0;
    for (int i = 0; i < numberOfComponents; i++)
    {
        cost+=list[i].price * list[i].quantity;
    }
}

void Product::print()const{

    string cod;
    double cos;

    //getting the info we need using the get function
    get(cod, cos);

    cout<<"The cost of a bed with code "<< cod <<" is "<< cos <<endl;

}

double Product::getTotalCost(){

    return totalCost;
}

//Our default parameterized constructor
Product::Product(string a, string b, int x) {
    //assigning default values
    code = a;
    name = b;
    numberOfComponents = x;

    for(int i = 0; i < x; i++) {
        list[i].name = "leg";
        list[i].quantity = 1;
        list[i].price = 10;
    }
    calculateCost();
    totalCost += cost;
}
//Our deconstructor
Product::~Product() {

    totalCost -= cost;
}

