//Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

//Our prototypes

//our class
class Rational
{
public:
	void set(int ,int);
	void get( int&, int&, double&)const;
	void print( ) ;
	void FractionForm();
	void SimplifyRational(int, int);
	bool EqualRationals(const Rational&) ;

private:
	int numerator, denominator;
	double fraction;
};

//int main() copied from lab instructions
int main()
{
	Rational rL, rR;
	int a, b;

	cout << "Enter the numerator and denominator of the first number: ";
	cin >> a >> b;
	rL.set(a, b);

	cout << "Enter the numerator and denominator of the second number: ";
	cin >> a >> b;
	rR.set(a, b);

	rL.print();
	rR.print();

	if(rL.EqualRationals(rR))
		cout << "The two rational numbers are equal" << endl;
	else
		cout << "The two rational numbers are not equal" << endl;

   	return 0;
}

void Rational::set(int a, int b) {

    numerator = a;
    denominator = b;
}

void Rational::get(int &nume, int &deno, double &fr)const {

    nume = numerator;
    deno = denominator;
    fr = fraction;
}

void Rational::FractionForm() {

    fraction = (double) numerator / denominator;
}

void Rational::print() {

    FractionForm();

    /*int de = num.denominator;
    int nu = num.numerator;
    double fr = num.fraction;*/

    cout<<"The fraction form of ("<<numerator<< "/"<< denominator<<") is "<<fraction << endl;
}

bool Rational::EqualRationals(const Rational &x) {

    int de, nu;
    double fr;

    x.get(de, nu, fr);

    SimplifyRational(numerator, denominator);
    SimplifyRational(nu, de);

    if (x.denominator == denominator && x.fraction == fraction && x.numerator == numerator) {
        return true;
    }
    else {
        return false;
    }
}

void Rational::SimplifyRational(int n, int d) {

    int r0, r1, r2;
    int a = n;
    int b = d;
    //copied this from the lab document
    if ( a > b )
     {      r0 = a;     r1 = b;}
    else
     {      r0 = b;     r1 = a;}

    r2 = r0 % r1;
    while ( r2 )
     {
          r0 = r1;     r1 = r2;      r2 = r0 % r1;
     }

    if ( r1 > 0 ){
        numerator /= r1;
        denominator /= r1;
    }

     else {
        numerator /= -r1;
        denominator /= -r1;
     }
}
