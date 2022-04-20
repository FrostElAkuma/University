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

    cout << "List L before reverseEachHalf(L) contains:" << endl;
    L.print();
    reverseEachHalf(L);
    cout << "List L after reverseEachHalf(L) contains:" << endl;
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

    cout << "List L before summerizeList(L,s) contains:" << endl;
    L.print();
    cout << "List s before summerizeList(L,s) contains:" << endl;
    s.print();
    summerizeList(L,s);
    cout << "List L after summerizeList(L,s) contains:" << endl;
    L.print();
    cout << "List s after summerizeList(L,s) contains:" << endl;
    s.print();

    L.clearList();
    L.insertEnd(12);
    L.insertEnd(11);
    L.insertEnd(13);
    L.insertEnd(14);
    L.insertEnd(15);
    L.insertEnd(13);
    L.insertEnd(10);
    cout << "List L before duplicateORremove(L) contains:" << endl;
    L.print();
    duplicateORremove(L);
    cout << "List L after duplicateORremove(L) contains:" << endl;
    L.print();


    return 0;
}
