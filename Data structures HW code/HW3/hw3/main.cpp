
#include"myQueue.h"

#include<iostream>
using namespace std;

int main()
{
    queueType <int> Q(9);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before changeByConstantNM(Q,'+', 3) contains:"<<endl;
    Q.print();
    changeByConstantNM(Q,'+', 3);
    cout<<"Queue Q after changeByConstantNM(Q,'+', 3) contains:"<<endl;
    Q.print();

    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before changeByConstantNM(Q,'-', 3) contains:"<<endl;
    Q.print();
    changeByConstantNM(Q,'-', 3);
    cout<<"Queue Q after changeByConstantNM(Q,'-', 3) contains:"<<endl;
    Q.print();


    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before Q.changeByConstantM('+', 3) contains:"<<endl;
    Q.print();
    Q.changeByConstantM('+', 3);
    cout<<"Queue Q after Q.changeByConstantM('+', 3) contains:"<<endl;
    Q.print();

    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before Q.changeByConstantM('-', 3) contains:"<<endl;
    Q.print();
    Q.changeByConstantM('-', 3);
    cout<<"Queue Q after Q.changeByConstantM('-', 3) contains:"<<endl;
    Q.print();



    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before Q.changeByConstantMR('+', 3) contains:"<<endl;
    Q.print();
    Q.changeByConstantMR('+', 3);
    cout<<"Queue Q after Q.changeByConstantMR('+', 3) contains:"<<endl;
    Q.print();

    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before Q.changeByConstantMR('-', 3) contains:"<<endl;
    Q.print();
    Q.changeByConstantMR('-', 3);
    cout<<"Queue Q after Q.changeByConstantMR('-', 3) contains:"<<endl;
    Q.print();


    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before duplicateElementsNM(Q) contains:"<<endl;
    Q.print();
    duplicateElementsNM(Q);
    cout<<"Queue Q after duplicateElementsNM(Q) contains:"<<endl;
    Q.print();


    Q.initializeQueue();
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(0);
    Q.addQueue(2);
    Q.addQueue(1);
    Q.addQueue(3);
    Q.addQueue(4);
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.deleteQueue();
    Q.addQueue(5);
    Q.addQueue(3);
    Q.addQueue(0);

    cout<<"Queue Q before Q.duplicateElementsM() contains:"<<endl;
    Q.print();
    Q.duplicateElementsM();
    cout<<"Queue Q after Q.duplicateElementsM() contains:"<<endl;
    Q.print();
    /*S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before changeByConstant(S,'-', 3) contains:"<<endl;
    S.print();
    changeByConstant(S,'-', 3);
    cout<<"Stack S after changeByConstant(S,'-', 3) contains:"<<endl;
    S.print();

    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before changeByConstantR(S,'+', 3) contains:"<<endl;
    S.print();
    changeByConstantR(S,'+', 3);
    cout<<"Stack S after changeByConstantR(S,'+', 3) contains:"<<endl;
    S.print();


    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before changeByConstantR(S,'-', 3) contains:"<<endl;
    S.print();
    changeByConstantR(S,'-', 3);
    cout<<"Stack S after changeByConstantR(S,'-', 3) contains:"<<endl;
    S.print();


    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before changeEach2(S) contains:"<<endl;
    S.print();
    changeEach2(S);
    cout<<"Stack S after changeEach2(S) contains:"<<endl;
    S.print();

    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before changeEach2R(S) contains:"<<endl;
    S.print();
    changeEach2R(S);
    cout<<"Stack S after changeEach2R(S) contains:"<<endl;
    S.print();


    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before duplicateElements(S) contains:"<<endl;
    S.print();
    duplicateElements(S);
    cout<<"Stack S after duplicateElements(S) contains:"<<endl;
    S.print();

    S.initializeStack();
    S.push(0);
    S.push(3);
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(1);
    S.push(2);

    cout<<"Stack S before duplicateElementsR(S) contains:"<<endl;
    S.print();
    duplicateElementsR(S);
    cout<<"Stack S after duplicateElementsR(S) contains:"<<endl;
    S.print();*/


    return 0;
}
