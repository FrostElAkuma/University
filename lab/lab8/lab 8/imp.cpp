#include "header.h"

void Student::set(string a, string b, double x)
{

    name = a;
    department = b;
    mark = x;
}

void Student::getMark(double &x) const
{
    x = mark;
}

void Student::get(string &a, string &b, double &x) const
{
    a = name;
    b = department;
    x = mark;
}

void Student::print() const
{
    //Have no idea what i am supposed to print here so i will just put a print that makes sense
    string n, d;
    double m;
    get(n, d, m);
    cout<<"Name: " << n <<"Department: " << d <<"Mark: " << m << endl;
}

Student::Student(string a, string b, double x)
{

    name = a;
    department = b;
    mark = x;
}

void Section::set(string a, int x)
{

    p = new Student[x];
    assert(p != NULL);

    number = a;
    numberOfStudents = x;

    cout<< endl <<"Enter information of section "<<a<<", it has "<<x<<" students" << endl;
    cout<<" for each student enter the name, department, and mark."<<endl<<endl;
    for(int i =0; i < x; i++)
    {
        string a, b;
        double x;
        cin>>a>>b>>x;
        p[i].set(a, b, x);
    }

}

double Section::average() const
{
    double avrg = 0;

    for(int i = 0; i < numberOfStudents; i++)
    {
        double x;
        p[i].getMark(x);
        avrg += x;
    }

    avrg /= numberOfStudents;

    return avrg;
}

void Section::print() const
{

    cout<<"Section "<<number<<" has "<< numberOfStudents << " students, and mark average of " << average() << endl;

}
//our default parametrized constructor
Section::Section(string a, int x)
{

    p = new Student[x];
    assert(p != NULL);

    number = a;
    numberOfStudents = x;

}

Section::~Section( )
{
	delete [ ] p;
    p = NULL;
}

Section::Section(const Section &otherObject )
{
	int x = otherObject.numberOfStudents;

	delete [] p;
	p = new Student[x];
	assert( p != NULL );

	for(int i=0; i < x; i++){
        p[i] = otherObject.p[i];
	}

}
