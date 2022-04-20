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

    cout << "List L before L.reverseEachHalf() contains:" << endl;
    L.print();
    L.reverseEachHalf();
    cout << "List L after L.reverseEachHalf() contains:" << endl;
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

    cout << "List L before L.summerizeList(s) contains:" << endl;
    L.print();
    cout << "List s before L.summerizeList(s) contains:"<<endl;
    s.print();
    L.summerizeList(s);
    cout << "List L after L.summerizeList(s) contains:" << endl;
    L.print();
    cout << "List s after L.summerizeList(s) contains:"<<endl;
    s.print();


    L.initializeList();
    L.insertlast(12);
    L.insertlast(11);
    L.insertlast(13);
    L.insertlast(14);
    L.insertlast(15);
    L.insertlast(13);
    L.insertlast(10);
    cout << "List L before L.duplicateORremove() contains:" << endl;
    L.print();
    L.duplicateORremove();
    cout << "List L after L.duplicateORremove() contains:" << endl;
    L.print();


    return 0;
}
