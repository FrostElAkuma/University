#include "header.h"

void Test::set(int x)
{

    p  = new float[x];
    assert(p != NULL);

    length = x;



    cout<<"Enter "<< x << " decimal numbers: ";
    for(int i = 0; i < length; i++)
    {
        float y;
        cin>>y;
        insertAt(i, y);
    }
}


void Test::insertAt(int x, float y)
{
    p[x] = y;
}

void Test::print() const
{
    cout <<"The 5 decimal numbers are: ";
    for( int i=0; i<length; i++ )
    {
        cout << p[i] << "  ";
    }
}

Test::Test(int x)
{

    length = x;
    p  = new float[x];
    assert(p != NULL);

}

Test::~Test( )
{
	delete [] p;
    p = NULL;
}

/*Test::Test(const Test &otherObject)
{

	length = otherObject.length;

	p = new float[length];
	assert(p != NULL);

	for(int i=0; i < length; i++){
        p[i] = otherObject.p[i];

	}

}
*/
