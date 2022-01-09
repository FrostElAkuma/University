#include <iostream>
#include <fstream>
#include <cstdlib> //for memory allocation

using namespace std;

struct node {
  int x;
  struct node *next;
};

void add(struct node*);
void print(struct node*, struct node*);

int main()
{
  node *root;       // This won't change, or we would lose the list in memory
  node *conductor;  // This will point to each node as it traverses the list

  root = new node;  // Sets it to actually point to something
  root->next = NULL;   //  Otherwise it would not work well
  root->x = 12;
  conductor = root; // The conductor points to the first node

  add(conductor);
  add(conductor);
  add(conductor);
  //conductor = root;

  print(conductor, root);


}

void add(struct node* conductor) {
    if ( conductor != NULL ) {
    while ( conductor->next != NULL)
      conductor = conductor->next;
  }
  conductor->next = new node;  // Creates a node at the end of the list
  conductor = conductor->next; // Points to that node
  conductor->next = 0;         // Prevents it from going any further
  conductor->x = 42;
}

void print(struct node* conductor, struct node* root) {
    conductor = root;
    while ( conductor != NULL ) {
      cout<< conductor->x;
      conductor = conductor->next;
    }
}
