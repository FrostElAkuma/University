#include "header.h"
//our driver
void menu(char&, int&);

int main()
{

    char a;
    int x;
    char flag = 'Y';

    cout << "*** Student Registration System ***" << endl;

    while(flag == 'Y')
    {
        menu(a, x);
        if (a != 'A' && a != 'S' && a != 'C' && a != 'E' && a != 'M')
        {
            cout<<"Invalid college!!"<<endl;
        }
        cout<<"Is there another student? Y, y, N, or n: ";
        cin>>flag;
        flag = toupper(flag);
    }


	return 0;
}


void menu(char& a, int& x)
{
    Arts art;
    Science sci;
    Computing comp;
    Engineering eng;
    Medical med;
	College *ptr;
    char cTest;
    int temp;

    cout<< endl <<"Enter which college and the number of credits"<<endl;
    cout<<"     \'A\' or \'a\'for the College of Arts" << endl
    <<"     \'S\' or \'s\' for the College of Science" << endl
    <<"     \'C\' or \'c\' for the College of Computing" << endl
    <<"     \'E\' or \'e\' for the College of Engineering" <<endl
    <<"     \'M\' or \'m\' for the College of Medical" << endl << endl;
    cout << "Your choice: ";
    cin>>cTest>>temp;
    cTest = toupper(cTest);

    a = cTest;
    x = temp;

    if (cTest != 'A' && cTest != 'S' && cTest != 'C' && cTest != 'E' && cTest != 'M')
    {

    }
    else if (cTest == 'A')
    {
        ptr = &art;
        ptr->Registration(temp);
    }
    else if (cTest == 'S')
    {
        ptr = &sci;
        ptr->Registration(temp);
    }
    else if (cTest == 'C')
    {
        ptr = &comp;
        ptr->Registration(temp);
    }
    else if (cTest == 'E')
    {
        ptr = &eng;
        ptr->Registration(temp);
    }
    else if (cTest == 'M')
    {

        ptr = &med;
        ptr->Registration(temp);
    }

}

