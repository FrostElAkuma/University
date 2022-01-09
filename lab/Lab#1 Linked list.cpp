#include <iostream>
#include <cstdlib> //for memory allocation

using namespace std;

struct Rational {
    int numerator, denominator;
    double fraction;
};
//for them to be global variables
Rational rL, rR;

struct node {
    struct Rational rational[2];//each node will have the 2 rationals that we compared
    struct node *next;
};

//Our prototypes
void print(Rational);				// to print the rational number.
void FractionForm(Rational&);			// to find the fraction form of the rational number!!!
void SimplifyRational(Rational&);		// to put the rational number in its simplest form!!!
bool EqualRationals(Rational, Rational);		// to check if tow rational numbers are equal.
int ask(int);                                   //asking a question based on input
void add(struct node* , struct node*);          //Doing more Rational operations and adding them to the list
void printStruct(struct node* , struct node*);  //Printing all the Rationals we did
void askAsk(struct node*, struct node*);        //prompting user for input

int main ()
{
    //our initial nodes
    node *start;
    node *last;
    //prompting user for input
    cout<<"Enter the numerator and denominator of the first number: ";
    cin>>rL.numerator>>rL.denominator;
    cout<<"Enter the numerator and denominator of the second number: ";
    cin>>rR.numerator>>rR.denominator;
    cout << endl;
    //Runing functions on the input
    print(rL);
    print(rR);

    if (EqualRationals(rL, rR)) {
        cout<<"The two rational numbers are equal"<< endl;
        cout<<endl;
    } else {
        cout<<"The two rational numbers are not equal"<< endl;
        cout<<endl;
    }
    //adding the first rational operation to our list
    start = new node;
    start->rational[0] = rL;
    start->rational[1] = rR;
    start->next = NULL;
    last = start;
    //Asking user questions weather he wants to do another Rational operation or just print all Rationals so far
    askAsk(last, start);
}

void print(Rational num) {

    FractionForm(num);

    int de = num.denominator;
    int nu = num.numerator;
    double fr = num.fraction;

    cout<<"The fraction form of ("<<nu<< "/"<< de<<") is "<<fr << endl;
}

void FractionForm(Rational &var){
    //Its a void function so it does not return any thing and the value will be automatically assigned since we are using the reference &
    var.fraction = (double) var.numerator / var.denominator;
}

bool EqualRationals(Rational x, Rational y) {

    SimplifyRational(x);
    SimplifyRational(y);

    if (x.denominator == y.denominator && x.fraction == y.fraction && x.numerator == y.numerator) {
        return true;
    }
    else {
        return false;
    }
}

void SimplifyRational(Rational &var) {

    int r0, r1, r2;
    int a = var.numerator;
    int b = var.denominator;
    //copied this from the lab document
    if ( a > b )
     {      r0 = a;     r1 = b;}
    else
     {      r0 = b;     r1 = a;}

    r2 = r0 % r1;
    while ( r2 )
     {
          r0 = r1;     r1 = r2;      r2 = r0 % r1;
     }

    if ( r1 > 0 ){
        var.numerator /= r1;
        var.denominator /= r1;
    }

     else {
        var.numerator /= -r1;
        var.denominator /= -r1;
     }
}

void askAsk(struct node* iAmTired, struct node* pleaseWork) {

    int flag, flag2;

    flag = ask(1);

    while (flag > 2 || flag < 1){
        flag = ask(2);
    }
    if(flag == 1) {
        add(iAmTired, pleaseWork);
    }
    else {
        flag2 = ask(3);
        while (flag2 > 2 || flag2 < 1) {
            flag2 = ask(4);
        }
        if (flag2 == 1) {
            printStruct(iAmTired, pleaseWork);
        }
        else{
            ask(5);
        }
    }
}

int ask(int type) {

    int f;

    if (type == 1) {
        cout<<"Want to do another Rational ? type 1 for yes and 2 for no: ";
        cin>>f;
    }
    else if (type == 2) {
        cout<<"Invalid input if you want to do another Rational, please type 1 for yes and 2 for no: ";
        cin>>f;
    }
    else if (type == 3) {
        cout<<"Want to print all Rationals so far ? type 1 for yes and 2 for no: ";
        cin>>f;
    }
    else if (type == 4) {
        cout<<"Invalid input if you want to print all Rationals, please type 1 for yes and 2 for no: ";
        cin>>f;
    }
    else if (type == 5) {
        cout<<endl<<"Thank you for your time have a nice day"<<endl;
    }

    return f;
}
/*
//This was another way in which i wanted to print the results but i found a better simpler way
void printAll(node op) {

    for (node *tmp = op; tmp!=NULL; tmp = tmp->next) {
        print(tmp->rational[0]);
        print(tmp->rational[1]);
        if (EqualRationals(tmp->rational[0], tmp->rational[1])) {
        cout<<"The two rational numbers are equal"<< endl;
        } else {
        cout<<"The two rational numbers are not equal"<< endl;
        }
    }
}*/

void add(struct node* conductor, struct node* root) {
    //A while loop that will get us to the last node in the list
    if ( conductor != NULL ) {
    while ( conductor->next != NULL)
      conductor = conductor->next;
    }
    //Doing the usual process of making a rational opertaion
    cout<<"Enter the numerator and denominator of the first number: ";
    cin>>rL.numerator>>rL.denominator;
    cout<<"Enter the numerator and denominator of the second number: ";
    cin>>rR.numerator>>rR.denominator;
    cout<<endl;

    print(rL);
    print(rR);

    if (EqualRationals(rL, rR)) {
        cout<<"The two rational numbers are equal"<< endl;
        cout<<endl;
    } else {
        cout<<"The two rational numbers are not equal"<< endl;
        cout<<endl;
    }
    //adding the new rational operation to our list
    conductor->next = new node;  // Creates a node at the end of the list
    conductor = conductor->next; // Points to that node
    conductor->next = NULL;         // Prevents it from going any further
    conductor->rational[0] = rL;    //inserting our data into the list
    conductor->rational[1] = rR;

    askAsk(conductor, root);
}

void printStruct(struct node* conductor, struct node* root) {
    conductor = root;
    while ( conductor != NULL ) {
        cout<<endl;
        print(conductor->rational[0]);
        print(conductor->rational[1]);
        if (EqualRationals(conductor->rational[0], conductor->rational[1])) {
        cout<<"The two rational numbers are equal"<< endl;
        cout<<endl;
        } else {
        cout<<"The two rational numbers are not equal"<< endl;
        cout<<endl;
        }
        conductor = conductor->next;
    }
    //askAsk(conductor, root); this causes an error will fix later maybe
    ask(5);
}
