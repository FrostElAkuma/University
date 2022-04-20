#include <iostream>
#include <string>
#include <cassert>
#include "newArrayListType.h"
using namespace std;
int main()
{
    arrayListType <int> L,s(3);
    L.insertEnd(2);
    L.insertEnd(1);
    L.insertEnd(3);
    L.insertEnd(4);
    L.insertEnd(5);
    L.insertEnd(3);
    L.insertEnd(0);

    cout << "List L before L.reverseEachHalf() contains:" << endl;
    L.print();
    L.reverseEachHalf();
    cout << "List L after L.reverseEachHalf() contains:" << endl;
    L.print();

    L.clearList();
    L.insertEnd(5);
    L.insertEnd(2);
    L.insertEnd(4);
    L.insertEnd(6);
    L.insertEnd(2);
    L.insertEnd(7);
    L.insertEnd(1);

    s.insertEnd(10);
    s.insertEnd(10);
    s.insertEnd(10);

    cout << "List L before L.summerizeList(s) contains:" << endl;
    L.print();
    cout << "List s before L.summerizeList(s) contains:" << endl;
    s.print();
    L.summerizeList(s);
    cout << "List L after L.summerizeList(s) contains:" << endl;
    L.print();
    cout << "List s after L.summerizeList(s) contains:" << endl;
    s.print();


    L.clearList();
    L.insertEnd(12);
    L.insertEnd(11);
    L.insertEnd(13);
    L.insertEnd(14);
    L.insertEnd(15);
    L.insertEnd(13);
    L.insertEnd(10);
    cout << "List L before L.duplicateORremove() contains:" << endl;
    L.print();
    L.duplicateORremove();
    cout << "List L after L.duplicateORremove() contains:" << endl;
    L.print();


    return 0;
}
