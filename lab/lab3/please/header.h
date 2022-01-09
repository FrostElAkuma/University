#include <iostream>
#include <fstream>

using namespace std;

struct Child
{
    string name;
    int age, toysCost;
};

class Kindergarten
{
public:
	void set(string ,int);
	void get(string&, int&, int&)const;
    void getCost(int&)const;
    void print()const;
    Kindergarten(string="", int=0, int=0);
private:
    string name;
	int cost, numberOfChildren;
	Child kids[6];
    void calculateCost(int);
};
