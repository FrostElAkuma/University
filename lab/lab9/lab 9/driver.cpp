#include "header.h"
//got this driver from the lab document
//void testCopyConst(Test&);

/*int main()
{
	Test one;

	one.set(5);
	one.print();
	cout << endl;

	Test two(one);

	two.print();
	cout << endl << endl;

	testCopyConst(one);

	cout << endl;
	cout << "After a call to the function testCopyConst, " << endl
		 << "         one is: ";
	one.print();
	cout << endl << endl;

	return 0;
}*/

//Dr. said to comment out the copy constructor and the testCopyconst instead of deleting them
int main()
{
	Test one;

	one.set(5);
	one.print();
	cout << endl;
    {
        Test two(one);
        two.print();
        cout << endl << endl;
    }

	one.print();
	cout << endl << endl;

	return 0;
}


/*void testCopyConst(Test& temp)
{
	cout << "*** Inside the function testCopyConst ***" << endl << endl;

	temp.insertAt(3, -100);
	cout << "After changing temp: ";
	temp.print();
	cout << endl << endl;

	cout << "*** Exiting the function testCopyConst ***" << endl;
}*/
