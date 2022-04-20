#include <iostream>
#include <string>
#include <cassert>
#include "unorderedLinkedList.h"
using namespace std;
int main()
{
    unorderedLinkedList <int> L,s;
    L.insertlast(2);
    L.insertlast(1);
    L.insertlast(3);
    L.insertlast(4);
    L.insertlast(5);
    L.insertlast(3);
    L.insertlast(0);

    cout << "List L before reverseEachHalf(L) contains:" << endl;
    L.print();
    reverseEachHalf(L);
    cout << "List L after reverseEachHalf(L) contains:" << endl;
    L.print();


    L.initializeList();
    L.insertlast(5);
    L.insertlast(2);
    L.insertlast(4);
    L.insertlast(6);
    L.insertlast(2);
    L.insertlast(7);
    L.insertlast(1);

    s.insertlast(10);
    s.insertlast(10);
    s.insertlast(10);

    cout << "List L before summerizeList(L,s) contains:" << endl;
    L.print();
    cout << "List s before summerizeList(L,s) contains:"<<endl;
    s.print();
    summerizeList(L,s);
    cout << "List L after summerizeList(L,s) contains:" << endl;
    L.print();
    cout << "List s after summerizeList(L,s) contains:"<<endl;
    s.print();


    L.initializeList();
    L.insertlast(12);
    L.insertlast(11);
    L.insertlast(13);
    L.insertlast(14);
    L.insertlast(15);
    L.insertlast(13);
    L.insertlast(10);
    cout << "List L before duplicateORremove(L) contains:" << endl;
    L.print();
    duplicateORremove(L);
    cout << "List L after duplicateORremove(L) contains:" << endl;
    L.print();


    return 0;
}
