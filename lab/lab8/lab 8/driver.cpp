#include "header.h"
//got this driver from the lab document
void output(Section);
int main( )
{
	Section abc;

	abc.set("01", 3);
	abc.print();

	output(abc);

	return 0;
}

void output(Section u)
{
	u.print( );
}

