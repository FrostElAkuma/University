#include "header.h"

//driver i got from the word document
int main()
{
	Interval first, second;

	cin >> first >> second;

	cout << "The first interval is: " << first << endl;
	cout << "The second interval is: " << second << endl;

	second += first;
	cout << "The second interval is: " << second << endl;

	first++;
	cout << "The first interval is: " << first << endl;

	return 0;
}
