#include "header.h"

int main()
{
    Sis w;
    string sID, cCode;

	w.set();

	cout << "Enter the student ID: ";
	cin >> sID;

	w.studentInformation(sID);

	cout << "Enter the course code: ";
	cin >> cCode;

	w.courseInformation(cCode);

	return 0;
}


