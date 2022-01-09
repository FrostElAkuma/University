#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>

using namespace std;

class test1
{
public:
    void print() const;
private:
    int mark = 20;
    int mark2 = 22;
};

class test2
{
public:
    void print()const;
private:
    test1 marks;
};

void test2::print() const {

    cout<< marks.mark << endl << marks.mark2;
}

int main()
{
    test2 t;
    t.print();

}

