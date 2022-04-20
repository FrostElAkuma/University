#ifndef H_UnorderedLinkedList
#define H_UnorderedLinkedList#include"linkedListType.h"


//***********************************************************
// Author: D.S. Malik
//
// This class specifies the members to implement the basic
// properties of an unordered linked list. This class is
// derived from the class linkedListType.
//***********************************************************
template < class Type >
  class unorderedLinkedList: public linkedListType < Type > {
    public: bool search(const Type & searchItem) const;
    //Function to determine whether searchItem is in the list.
    //Postcondition: Returns true if searchItem is in the list,
    // otherwise the value false is returned.
    void insertfirst(const Type & newItem);
    //Function to insert newItem at the beginning of the list.
    //Postcondition: this->first points to the new list, newItem is
    // inserted at the beginning of the list, this->last points to
    // the this->last node, and this->count is incremented by 1.
    //
    void insertlast(const Type & newItem);
    //Function to insert newItem at the end of the list.
    //Postcondition: this->first points to the new list, newItem is
    // inserted at the end of the list, this->last points to the
    // this->last node, and this->count is incremented by 1.
    void deleteNode(const Type & deleteItem);
    //Function to delete deleteItem from the list.
    //Postcondition: If found, the node containing deleteItem

    // is deleted from the list. this->first points to the this->first
    // node, this->last points to the this->last node of the updated
    // list, and this->count is decremented by 1.

    void reverseEachHalf();
    void summerizeList(unorderedLinkedList < Type > & s);
    void duplicateORremove();
    void split(const Type & item, unorderedLinkedList < Type > & L1, unorderedLinkedList < Type > & L2) const;
  };

template < class Type >
  bool unorderedLinkedList < Type > ::
  search(const Type & searchItem) const {
    nodeType < Type > * current; //pointer to traverse the list
    bool found = false;
    current = this -> first; //set current to point to the this->first
    //node in the list
    while (current != NULL && !found) //search the list
      if (current -> info == searchItem) //searchItem is found
        found = true;
      else
        current = current -> link; //make current point to
    //the after node
    return found;
  } //end search

template < class Type >
  void unorderedLinkedList < Type > ::insertfirst(const Type & newItem) {
    nodeType < Type > * newNode; //pointer to create the new node
    newNode = new nodeType < Type > ; //create the new node
    newNode -> info = newItem; //store the new item in the node
    newNode -> link = this -> first; //insert newNode before this->first
    this -> first = newNode; //make this->first point to the actual this->first node
    this -> count++; //increment this->count
    if (this -> last == NULL) //if the list was empty, newNode is also
      //the this->last node in the list
      this -> last = newNode;
  } //end insertthis->first

template < class Type >
  void unorderedLinkedList < Type > ::insertlast(const Type & newItem) {
    nodeType < Type > * newNode; //pointer to create the new node
    newNode = new nodeType < Type > ; //create the new node
    newNode -> info = newItem; //store the new item in the node
    newNode -> link = NULL; //set the link field of newNode to NULL
    if (this -> first == NULL) //if the list is empty, newNode is
    //both the this->first and this->last node
    {
      this -> first = newNode;
      this -> last = newNode;
      this -> count++; //increment this->count
    } else //the list is not empty, insert newNode after this->last
    {
      this -> last -> link = newNode; //insert newNode after this->last
      this -> last = newNode; //make this->last point to the actual
      //this->last node in the list
      this -> count++; //increment this->count
    }
  } //end insertthis->last

template < class Type >
  void unorderedLinkedList < Type > ::deleteNode(const Type & deleteItem) {
    nodeType < Type > * current; //pointer to traverse the list
    nodeType < Type > * trailCurrent; //pointer just before current
    bool found;
    if (this -> first == NULL) //Case 1; the list is empty.
      cout << "Cannot delete from an empty list." <<
      endl;
    else {
      if (this -> first -> info == deleteItem) //Case 2
      {
        current = this -> first;
        this -> first = this -> first -> link;
        this -> count--;
        if (this -> first == NULL) //the list has only one node
          this -> last = NULL;
        delete current;
      } else //search the list for the node with the given info
      {
        found = false;
        trailCurrent = this -> first; //set trailCurrent to point
        //to the this->first node
        current = this -> first -> link; //set current to point to
        //the second node
        while (current != NULL && !found) {
          if (current -> info != deleteItem) {
            trailCurrent = current;
            current = current -> link;
          } else
            found = true;
        } //end while
        if (found) //Case 3; if found, delete the node
        {
          trailCurrent -> link = current -> link;
          this -> count--;
          if (this -> last == current) //node to be deleted was the
            //this->last node
            this -> last = trailCurrent; //update the value of this->last
          delete current; //delete the node from the list
        } else
          cout << "The item to be deleted is not in " <<
          "the list." << endl;
      } //end else
    } //end else
  } //end deleteNode

template < class Type >
  void unorderedLinkedList < Type > ::reverseEachHalf() {
    nodeType < Type > * p;
    nodeType < Type > * onIt = this -> first;
    nodeType < Type > * after;
    nodeType < Type > * start;

    int counter = 0;

    start = onIt;
    while (counter < this -> count / 2) {
      after = onIt -> link;
      onIt -> link = p;
      p = onIt;
      onIt = after;
      counter++;
    }
    this -> first = p;
    start -> link = this -> last;
    start = onIt;
    while (onIt != NULL) {
      after = onIt -> link;
      onIt -> link = p;
      p = onIt;
      onIt = after;
    }
    start -> link = onIt;
  }

template < class Type >
  void unorderedLinkedList < Type > ::summerizeList(unorderedLinkedList < Type > & s) {
    nodeType < Type > * p = this -> first;
    nodeType < Type > * q = s.first;
    nodeType < Type > * newNode;
    Type avrg;

    if (this -> count % 2 == 0) {
      s.count = this -> count / 2;
    } else {
      s.count = this -> count / 2 + 1;
    }

    while (p != NULL) {
      if (p == this -> last) {
        avrg = p -> info;

        if (q == NULL) {
          newNode = new nodeType < Type > ;
          newNode -> info = avrg;
          newNode -> link = NULL;
          q = newNode -> link;
          s.last -> link = newNode;
          s.last = newNode;
        } else {
          q -> info = avrg;
          q = q -> link;
        }

        break;
      }

      avrg = (p -> info + p -> link -> info) / 2;
      if (q == NULL) {
        newNode = new nodeType < Type > ;
        newNode -> info = avrg;
        newNode -> link = NULL;
        q = newNode -> link;
        s.last -> link = newNode;
        s.last = newNode;

      } else {

        q -> info = avrg;

        q = q -> link;

      }

      p = p -> link -> link;

    }
  }

template < class Type >
  void unorderedLinkedList < Type > ::duplicateORremove() {
    nodeType < Type > * p;
    nodeType < Type > * q = this -> first;
    p = this -> first;

    while (p != NULL) {
      if ((p -> info % 2) != 0) {

        nodeType < Type > * newNode = new nodeType < Type > ;
        newNode -> info = p -> info;
        newNode -> link = p -> link;
        p -> link = newNode;
        if (p == this -> last)
          this -> last = newNode;
        this -> count++;
        q = p -> link;
        p = newNode -> link;
      } else if ((p -> info % 2) == 0) {
        q -> link = p -> link;
        q = p -> link;
        if (this -> first == p)
          this -> first = p -> link;
        delete p;
        if (this -> first == NULL)
          this -> last = NULL;

        this -> count--;
        p = q;

      } else
        p = p -> link;

    }
  }

template < class Type >
  void reverseEachHalf(unorderedLinkedList < Type > & L) {
    unorderedLinkedList < Type > t(L);
    unorderedLinkedList < Type > o;
    unorderedLinkedList < Type > s;
    L.initializeList();

    int firstHalfLength = t.length() / 2;
    int otherHalfLength = t.length() - firstHalfLength;

    for (int i = 0; i < firstHalfLength; i++) {
      o.insertfirst(t.front());
      t.deleteNode(t.front());
    }
    for (int i = 0; i < otherHalfLength; i++) {
      s.insertlast(t.back());
      t.deleteNode(t.back());
    }
    while (!o.isEmptyList()) {
      L.insertlast(o.front());
      o.deleteNode(o.front());
    }
    while (!s.isEmptyList()) {
      L.insertlast(s.front());
      s.deleteNode(s.front());
    }

  }

template < class Type >
  void duplicateORremove(unorderedLinkedList < Type > & L) {
    unorderedLinkedList < Type > t(L);
    L.initializeList();
    while (!t.isEmptyList()) {
      if (t.front() % 2 == 0) {
        t.deleteNode(t.front());
      } else {
        L.insertlast(t.front());
        L.insertlast(t.front());
        t.deleteNode(t.front());
      }
    }

  }

#endif
