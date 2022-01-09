//Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//our struct
struct Component
{
    int quantity, price;
    string name;
};

//our class
class Product
{
public:
	void set(string, string, int);
	void get(string&, double&)const;
	void calculateCost();
	void print() const;
	static double getTotalCost();
	Product(string="F000", string="bed", int=1);
	~Product();

private:
	string code, name;
	int numberOfComponents;
	double cost;
	Component list[50];
	static double totalCost;
};

