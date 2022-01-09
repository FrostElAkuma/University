#include "header.h"

//driver i got from the word document
int main()
{
	double lowerBoundary, upperBoundary;
	Interval first, second, third;

	cout << "Enter the lower and upper boundaries of the first interval: ";
	cin >> lowerBoundary >> upperBoundary;
	first.set(lowerBoundary, upperBoundary);

	cout << "Enter the lower and upper boundaries of the second interval: ";
	cin >> lowerBoundary >> upperBoundary;
	second.set(lowerBoundary, upperBoundary);

	cout << "The first interval is: ";
	first.print();
	cout << endl;

	cout << "The second interval is: ";
	second.print();
	cout << endl;

	third = first + second;

	first.print();
	cout << " + ";
	second.print();
	cout << " = ";
	third.print();
	cout << endl;

	third = first - second;

	first.print();
	cout << " - ";
	second.print();
	cout << " = ";
	third.print();
	cout << endl;

	third = first * second;

	first.print();
	cout << " * ";
	second.print();
	cout << " = ";
	third.print();
	cout << endl;

	third = first / second;

	first.print();
	cout << " / ";
	second.print();
	cout << " = ";
	third.print();
	cout << endl;

	cout << "Using the == operator: ";
	if(first == second){
		first.print();
		cout << " == ";
		second.print();
	}else{
		first.print();
		cout << " != ";
		second.print();
	}
	cout << endl;

	return 0;
}

