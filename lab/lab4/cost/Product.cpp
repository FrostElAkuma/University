#include "Product.h"

int main()
{
	string pName, pCode;
	int pNumOfComponents;

	Product desk;
	desk.print();

	cout << "Enter the product name, code, and number of components: ";
	cin >> pName >> pCode >> pNumOfComponents;
	desk.set(pName, pCode, pNumOfComponents);
	desk.print();
	cout << "Total cost of all products is: " << Product::getTotalCost() << endl;

	return 0;
}

