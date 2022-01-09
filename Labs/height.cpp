#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
//Prototype
void get_input(double&);
void convert(int&, int&, double);
void show_output(int, int, double);
//Main function copied from lab
int main()
{
        int feet, inches;
        double meters;
        cout<<fixed<<showpoint<<setprecision(2);

        get_input(meters);
        convert(feet, inches, meters);
        show_output(feet, inches, meters);

        return 0;
}

//A void returning function that prompts user for height and directly initialize meter
void get_input(double &height)
{
    cout << "Enter height as double: ";
     cin >> height;
}

void convert(int &feet, int &inches, double height)
{

    feet = height / 0.3048;
    inches = round((height / 0.3048) * 12);
    inches = inches % 12;
}

void show_output(int feet, int inches, double height)
{
    cout << "The height " << height << " (meters and centimeters) is:" << feet << " ft and " << inches << "\"";
}
