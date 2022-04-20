#ifndef H_LinkedList
#define H_LinkedList
#include<iostream>

using namespace std;
//***********************************************************
// Author: D.S. Malik
//
// This class specifies the members to implement the basic
// properties of a linked list. This is an abstract class.
// We cannot instantiate an object of this class.
//***********************************************************

template < class Type >
struct nodeType {
    Type info;
    nodeType < Type >* link;
};

template < class Type >
class linkedListType {
public:
    const linkedListType < Type >& operator =
        (const linkedListType < Type >&);
    //Overload the assignment operator.
    void initializeList();
    //Initialize the list to an empty state.
    //Postcondition: this->first = NULL, this->last = NULL, this->count = 0;
    bool isEmptyList() const;
    //Function to determine whether the list is empty.
    //Postcondition: Returns true if the list is empty, otherwise
    // it returns false.
    void print() const;
    //Function to output the data contained in each node.
    //Postcondition: none
    int length() const;
    //Function to return the number of nodes in the list.
    //Postcondition: The value of this->count is returned.
    void destroyList();
    //Function to delete all the nodes from the list.
    //Postcondition: this->first = NULL, this->last = NULL, this->count = 0;
    Type front() const;
    //Function to return the this->first element of the list.
    //Precondition: The list must exist and must not be empty.
    //Postcondition: If the list is empty, the program terminates;
    // otherwise, the this->first element of the list is returned.
    Type back() const;
    //Function to return the this->last element of the list.
    //Precondition: The list must exist and must not be empty.
    //Postcondition: If the list is empty, the program
    // terminates; otherwise, the this->last
    // element of the list is returned.
    virtual bool search(const Type& searchItem) const = 0;
    //Function to determine whether searchItem is in the list.
    //Postcondition: Returns true if searchItem is in the list,
    // otherwise the value false is returned.
    virtual void insertfirst(const Type& newItem) = 0;
    //Function to insert newItem at the beginning of the list.
    //Postcondition: this->first points to the new list, newItem is
    // inserted at the beginning of the list, this->last points to
    // the this->last node in the list, and this->count is incremented by
    // 1.
    virtual void insertlast(const Type& newItem) = 0;
    //Function to insert newItem at the end of the list.
    //Postcondition: this->first points to the new list, newItem is
    // inserted at the end of the list, this->last points to the
    // this->last node in the list, and this->count is incremented by 1.
    virtual void deleteNode(const Type& deleteItem) = 0;
    //Function to delete deleteItem from the list.
    //Postcondition: If found, the node containing deleteItem is
    // deleted from the list. this->first points to the this->first node,
    // this->last points to the this->last node of the updated list, and
    // this->count is decremented by 1.
    linkedListType();
    //default constructor
    //Initializes the list to an empty state.
    //Postcondition: this->first = NULL, this->last = NULL, this->count = 0;
    linkedListType(const linkedListType < Type >& otherList);
    //copy constructor
    ~linkedListType();
    //destructor
    //Deletes all the nodes from the list.
    //Postcondition: The list object is destroyed.

    void incrementByConstant(const Type& i);
    void sortEach2(char aORd);
    void duplicateORremove(const Type & item);
    void split(const Type & item,linkedListType < Type > & L1,linkedListType < Type > & L2) const;



protected:
    int count; //variable to store the number of list elements
    nodeType < Type >* first; //pointer to the this->first node of the list
    nodeType < Type >* last; //pointer to the this->last node of the list
private:
    void copyList(const linkedListType < Type >& otherList);
    //Function to make a copy of otherList.
    //Postcondition: A copy of otherList is created and assigned
    // to this list.
};

template < class Type >
bool linkedListType < Type > ::isEmptyList() const {
    return (this->first == NULL);
}

template < class Type >
linkedListType < Type > ::linkedListType() //default constructor
{
    this->first = NULL;
    this->last = NULL;
    this->count = 0;
}

template < class Type >
void linkedListType < Type > ::destroyList() {
    nodeType < Type >* temp; //pointer to deallocate the memory
    //occupied by the node
    while (this->first != NULL) //while there are nodes in the list
    {
        temp = this->first; //set temp to the current node
        this->first = this->first->link; //advance this->first to the next node
        delete temp; //deallocate the memory occupied by temp
    }
    this->last = NULL; //initialize this->last to NULL; this->first has already
    //been set to NULL by the while loop
    this->count = 0;
}

template < class Type >
void linkedListType < Type > ::initializeList() {
    destroyList(); //if the list has any nodes, delete them
}

template < class Type >
void linkedListType < Type > ::print() const {
    nodeType < Type >* current; //pointer to traverse the list
    current = this->first; //set current point to the this->first node
    while (current != NULL) //while more data to print
    {
        cout << current->info << " ";
        current = current->link;
    }

    cout<<endl;
} //end print

template < class Type >
int linkedListType < Type > ::length() const {
    return this->count;
}

template < class Type >
Type linkedListType < Type > ::front() const {
    assert(this->first != NULL);
    return this->first->info; //return the info of the this->first node
} //end front

template < class Type >
Type linkedListType < Type > ::back() const {
    assert(this->last != NULL);
    return this->last->info; //return the info of the this->last node
} //end back

template < class Type >
void linkedListType < Type > ::copyList(const linkedListType < Type >& otherList) {
    nodeType < Type >* newNode; //pointer to create a node
    nodeType < Type >* current; //pointer to traverse the list
    if (this->first != NULL) //if the list is nonempty, make it empty
        destroyList();
    if (otherList.first == NULL) //otherList is empty
    {
        this->first = NULL;
        this->last = NULL;
        this->count = 0;
    }
    else {
        current = otherList.first; //current points to the
        //list to be copied
        this->count = otherList.count;
        //copy the this->first node
        this->first = new nodeType < Type >; //create the node
        this->first->info = current->info; //copy the info
        this->first->link = NULL; //set the link field of the node to NULL
        this->last = this->first; //make this->last point to the this->first node
        current = current->link; //make current point to the next
        // node
        //copy the remaining list
        while (current != NULL) {
            newNode = new nodeType < Type >; //create a node
            newNode->info = current->info; //copy the info
            newNode->link = NULL; //set the link of newNode to NULL
            this->last->link = newNode; //attach newNode after this->last
            this->last = newNode; //make this->last point to the actual this->last
            //node
            current = current->link; //make current point to the
            //next node
        } //end while
    } //end else
} //end copyList

template < class Type >
linkedListType < Type > ::~linkedListType() //destructor
{
    destroyList();
}

template < class Type >
linkedListType < Type > ::linkedListType(const linkedListType < Type >& otherList) {
    this->first = NULL;
    copyList(otherList);
} //end copy constructor

//overload the assignment operator
template < class Type >
const linkedListType < Type >& linkedListType < Type > ::operator =
(const linkedListType < Type >& otherList) {
    if (this != &otherList) //avoid self-copy
    {
        copyList(otherList);
    } //end else
    return *this;
}




//HWQ1
template < class Type >
void linkedListType < Type > ::incrementByConstant(const Type& i)
{
    nodeType <Type>* p = this->first;
    while (p != NULL)
    {
          p->info = p->info + i;
          p=p->link;
    }
}


//HWQ2
template < class Type >
void linkedListType < Type > ::sortEach2(char aORd)
{
    nodeType <Type> * p;
    nodeType <Type> * q;
    p = this->first;
    while (p != NULL)
    {
        q = p->link;
        if (q == NULL)
            break;

        //cout<<p->info<<" "<<q->info<<endl;
        if (aORd == 'a' && p->info > q->info) {
            Type temp = p->info;
            p->info = q->info;
            q->info = temp;
        }
        if (aORd == 'd' && p->info < q->info) {
            Type temp = q->info;
            q->info = p->info;
            p->info = temp;
        }
        p = q->link;
    }
}

template < class Type >
void linkedListType < Type > ::duplicateORremove(const Type & item)
{
    nodeType <Type> * p;
    nodeType <Type> * q;
    p = first;
    while (p != NULL)
    {
        if (p->info>item)
        {
           nodeType<Type> * newNode = new nodeType<Type>;
           newNode->info = p->info;
           if (p == first)
           {
               newNode->link = first;
               first = newNode;
               count++;
               p=p->link;

           } else
           {
               q = p->link;
               p->link = newNode;
               newNode->link = q;
               if (p == last)
                last = newNode;
               count++;
               p = q;
            }
        }else if (p->info<item)
            {
                if (p == first)
                {
                    q = p;
                    first = p->link;
                    delete q;
                    if (first==NULL)
                        last = NULL;

                    count--;
                    p=first;
                }else
                {
                    q = first;
                    while(q->link != p)
                        q = q->link;

                    q->link = p->link;
                    delete p;
                    p = q->link;
                    count--;
                }
            }else
                p = p->link;
    }
}

template < class Type >
void linkedListType < Type > ::split(const Type & item,
                                     linkedListType < Type > & L1,linkedListType < Type > & L2) const
{

    nodeType <Type> * p = first;
    while(p!=NULL)
    {
        nodeType<Type> * newNode = new nodeType<Type>;
        newNode->info = p->info;
        newNode ->link = NULL;

        if(p->info < item)
        {
            if(L1.first == NULL)
            {
                L1.first = L1.last = newNode;
                L1.count++;
            }else{
                L1.last ->link = newNode;
                L1.last =newNode;
                L1.count++;

            }
        }else{
            if(L2.first == NULL)
            {
                L2.first = L2.last = newNode;
                L2.count++;
            }else{
                L2.last ->link = newNode;
                L2.last =newNode;
                L2.count++;
            }

        }
        p=p->link;

    }
}


#endif
