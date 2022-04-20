#ifndef QUEUETYPE_H_INCLUDED
#define QUEUETYPE_H_INCLUDED
#include<iostream>
#include<cassert>
using namespace std;
//*************************************************************
// Author: D.S. Malik
//
// This class specifies the basic operation on a queue as an
// array.
//*************************************************************

//Global variable for i
int i = 0;

template <class Type>
class queueType
{
public:
const queueType<Type>& operator=(const queueType<Type>&);
//Overload the assignment operator.
bool isEmptyQueue() const;
//Function to determine whether the queue is empty.
//Postcondition: Returns true if the queue is empty,
// otherwise returns false.
bool isFullQueue() const;
//Function to determine whether the queue is full.
//Postcondition: Returns true if the queue is full,
// otherwise returns false.
void initializeQueue();
//Function to initialize the queue to an empty state.
//Postcondition: The queue is empty.
Type front() const;
//Function to return the first element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: If the queue is empty, the program
// terminates; otherwise, the first element of the
// queue is returned.
Type back() const;
//Function to return the last element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: If the queue is empty, the program
// terminates; otherwise, the last element of the queue
// is returned.
void addQueue(const Type& queueElement);
//Function to add queueElement to the queue.
//Precondition: The queue exists and is not full.
//Postcondition: The queue is changed and queueElement is
// added to the queue.
void deleteQueue();
//Function to remove the first element of the queue.
//Precondition: The queue exists and is not empty.
//Postcondition: The queue is changed and the first element
// is removed from the queue.
queueType(int queueSize = 100);
//Constructor
queueType(const queueType<Type>& otherQueue);
//Copy constructor
~queueType();
//Destructor

void deleteMin();
void print() const;

//I added these
void changeByConstantM(char o, int num);
void changeByConstantMR(char o, int num);
void duplicateElementsM();


private:
int maxQueueSize; //variable to store the maximum queue size
int count; //variable to store the number of
//elements in the queue
int queueFront; //variable to point to the first
//element of the queue
int queueRear; //variable to point to the last
//element of the queue
Type *list; //pointer to the array that holds
//the queue elements
};

//write a member function that deletes the minimum value in the queue.
//you are not allowed to use any predefined operations or other
//data structures or arrays
template <class Type>
void queueType<Type>::deleteMin()
{
    if(count==0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int minL = queueFront;
    for(int i=0;i<count;i++)
        if(list[(queueFront+i)%maxQueueSize]<list[minL])
            minL = (queueFront+i)%maxQueueSize;

    for(int i=minL;i!=queueRear;i=(i+1)%maxQueueSize)
        list[i]=list[(i+1)%maxQueueSize];

    count--;
    queueRear--;
    if(queueRear==-1)
        queueRear = maxQueueSize-1;

}

template <class Type>
void queueType<Type>::print() const
{
    /*
    //you can use this as well
    for(int i=queueFront;i!=queueRear;i=(i+1)%maxQueueSize)
        cout<<list[i]<<" ";
    cout<<list[queueRear]<<endl;*/

    for(int i=0;i<count;i++)
        cout<<list[(queueFront+i)%maxQueueSize]<<" ";

    cout<<endl;
}
template <class Type>
bool queueType<Type>::isEmptyQueue() const
{
return (count == 0);
} //end isEmptyQueue
template <class Type>
bool queueType<Type>::isFullQueue() const
{
return (count == maxQueueSize);
} //end isFullQueue

template <class Type>
void queueType<Type>::initializeQueue()
{
queueFront = 0;
queueRear = maxQueueSize - 1;
count = 0;
} //end initializeQueue

template <class Type>
Type queueType<Type>::front() const
{
assert(!isEmptyQueue());
return list[queueFront];
} //end front

template <class Type>
Type queueType<Type>::back() const
{
assert(!isEmptyQueue());
return list[queueRear];
} //end back

template <class Type>
void queueType<Type>::addQueue(const Type& newElement)
{
if (!isFullQueue())
{
queueRear = (queueRear + 1) % maxQueueSize; //use the
//mod operator to advance queueRear
//because the array is circular
count++;
list[queueRear] = newElement;
}
else
cout << "Cannot add to a full queue." << endl;
} //end addQueue

template <class Type>
void queueType<Type>::deleteQueue()
{
if (!isEmptyQueue())
{
count--;
queueFront = (queueFront + 1) % maxQueueSize; //use the
//mod operator to advance queueFront
//because the array is circular
}
else
cout << "Cannot remove from an empty queue" << endl;
} //end deleteQueue

template <class Type>
queueType<Type>::queueType(int queueSize)
{
if (queueSize <= 0)
{
cout << "Size of the array to hold the queue must "
<< "be positive." << endl;
cout << "Creating an array of size 100." << endl;
maxQueueSize = 100;
}
else
maxQueueSize = queueSize; //set maxQueueSize to
//queueSize
queueFront = 0; //initialize queueFront
queueRear = maxQueueSize - 1; //initialize queueRear
count = 0;
list = new Type[maxQueueSize]; //create the array to
//hold the queue elements
} //end constructor

template <class Type>
queueType<Type>::~queueType()
{
delete [] list;
}


template < class Type >
  queueType < Type > ::
      queueType(const queueType < Type > & otherList) {
    maxQueueSize = otherList.maxQueueSize;
    count = otherList.count;
    queueFront = otherList.queueFront;
    queueRear = otherList.queueRear;

    list = new Type[maxQueueSize]; //create the array
    assert(list != NULL); //terminate if unable to allocate
    //memory space
    for (int j = 0; j < count; j++) //copy otherList
      list[(queueFront+j)%maxQueueSize] = otherList.list[(queueFront+j)%maxQueueSize];
  } //end copy constructor

template < class Type >
const queueType<Type>& queueType < Type > ::
    operator=(const queueType<Type>& otherList)
    {
        if(this!=&otherList)
        {
            delete[]list;
            maxQueueSize = otherList.maxQueueSize;
            count = otherList.count;
            queueFront = otherList.queueFront;
            queueRear = otherList.queueRear;

            list = new Type[maxQueueSize]; //create the array
            assert(list != NULL); //terminate if unable to allocate
                //memory space
            for (int j = 0; j < count; j++) //copy otherList
                list[(queueFront+j)%maxQueueSize] = otherList.list[(queueFront+j)%maxQueueSize];

        }
        return *this;

    }
//My code starts here
template <class Type>
void changeByConstantNM(queueType<Type>&q, char o, int num)
{
    int count =0;
    //create a copy of the queue
    queueType<Type> temp(q);
    //count elements in queue
    while(!temp.isEmptyQueue()){
            count++;
            temp.deleteQueue();
    }

    //allocate array to put the elements of the queue in
    Type *a = new Type[count];
    //move elements to the array and increment them by the ammount specified
    for(int i=0;i<count;i++)
    {
            a[i]= q.front();
            q.deleteQueue();
            if(o == '+')
            {
                a[i] += num;
            }
            else if (o == '-')
            {
                a[i] -= num;
            }
    }

    //move elements back to queue
    for(int i=0;i<count;i++)
        q.addQueue(a[i]);

    delete[]a;
}

template <class Type>
void queueType<Type>::changeByConstantM(char o, int num)
{
    if(count==0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    //int minL = queueFront; //Gets the index
    for(int i=0;i<count;i++)
        if(o == '+')
            list[(queueFront+i)%maxQueueSize] += num;
        else if (o == '-')
            list[(queueFront+i)%maxQueueSize] -= num;

}

template <class Type>
void queueType<Type>::changeByConstantMR(char o, int num)
{
    if(count==0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    //Base case
    if(i == count)
    {
        i = 0; //Reseting i
        return;
    }
    //i is global
    if(i<count)
    {
        if(o == '+')
        {
            list[(queueFront+i)%maxQueueSize] += num;
        }

        else if (o == '-')
        {
            list[(queueFront+i)%maxQueueSize] -= num;
        }
        i++; //Since i cant pass any incremented number in the recursive function
        changeByConstantMR(o, num);
    }

}
template <class Type>
void duplicateElementsNM(queueType<Type>&q)
{
    int count =0;
    //create a copy of the queue
    queueType<Type> temp(q);
    //count elements in queue
    while(!temp.isEmptyQueue()){
            count++;
            temp.deleteQueue();
    }

    //allocate array to put the elements of the queue in
    Type *a = new Type[count];

    //move elements to the array and increment them by the ammount specified
    for(int i = 0; i < count; i++)
    {
            a[i]= q.front();
            q.deleteQueue();
    }
    queueType<Type> goodSize(count*2);
    q = goodSize;
    //move elements back to queue
    for(int i=0;i<count;i++)
    {
        q.addQueue(a[i]);
        q.addQueue(a[i]);
    }

    delete[]a;
}

template <class Type>
void queueType<Type>::duplicateElementsM()
{
    if(count==0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int c = count; //Gets the index
    for(int i=0;i<c;i++)
    {
        if (!isFullQueue())
        {
        queueRear = (queueRear + 1) % maxQueueSize; //Making queueRear go to next INDEX
        list[queueRear] = list[(queueFront)%maxQueueSize];
        queueRear = (queueRear + 1) % maxQueueSize;
        list[queueRear] = list[(queueFront)%maxQueueSize]; // Duplicating
        queueFront = (queueFront + 1) % maxQueueSize; // Making queueFront go to the next INDEX
        count++;
        }
        else
        cout << "Cannot add to a full queue." << endl;
    }
}
#endif // QUEUETYPE_H_INCLUDED
