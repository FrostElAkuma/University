#include "header.h"

//driver i got from the word document
int main()
{
    Worker One("Omar Ali", 3);

    One.print();

    One.set("Ali Omar", 4);
    One.print();

    (++One).print();

    return 0;
}

