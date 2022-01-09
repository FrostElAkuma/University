#include <iostream>

using namespace std;

struct Rational {
    int numerator, denominator;
    double fraction;
};
//for them to be global variables
Rational rL, rR;

//Our prototypes
void print(Rational);				// to print the rational number.
void FractionForm(Rational&);			// to find the fraction form of the rational number!!!
void SimplifyRational(Rational&);		// to put the rational number in its simplest form!!!
bool EqualRationals(Rational, Rational);		// to check if tow rational numbers are equal.

int main ()
{

    cout<<"Enter the numerator and denominator of the first number: ";
    cin>>rL.numerator>>rL.denominator;
    cout<<"Enter the numerator and denominator of the second number: ";
    cin>>rR.numerator>>rR.denominator;

    print(rL);
    print(rR);

    if (EqualRationals(rL, rR)) {
        cout<<"The two rational numbers are equal"<< endl;
    } else {
        cout<<"The two rational numbers are not equal"<< endl;
    }
}

void print(Rational num) {

    FractionForm(num);

    int de = num.denominator;
    int nu = num.numerator;
    double fr = num.fraction;

    cout<<"The fraction form of ("<<nu<< "/"<< de<<") is "<<fr << endl;
}

void FractionForm(Rational &var){
    //Its a void function so it does not return any thing and the value will be automatically assigned since we are using the reference &
    var.fraction = (double) var.numerator / var.denominator;
}

bool EqualRationals(Rational x, Rational y) {

    SimplifyRational(x);
    SimplifyRational(y);

    if (x.denominator == y.denominator && x.fraction == y.fraction && x.numerator == y.numerator) {
        return true;
    }
    else {
        return false;
    }
}

void SimplifyRational(Rational &var) {

    int r0, r1, r2;
    int a = var.numerator;
    int b = var.denominator;
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
        var.numerator /= r1;
        var.denominator /= r1;
    }

     else {
        var.numerator /= -r1;
        var.denominator /= -r1;
     }
}
