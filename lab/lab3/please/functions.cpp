#include "header.h"


Kindergarten::Kindergarten(string tS, int tN, int tC) {

    name = tS;
    numberOfChildren = tN;
    cost = tC;
}

void Kindergarten::set(string a, int b) {

    string nameu;
    int ageu, costu;
    int i;

    name = a;
    numberOfChildren = b;


    //reading = ifstream IF writing = onstream
    ifstream inFile("Child.txt", ios::in);
    //',' means keep reading the first line until you reach ,
    while(getline(inFile, nameu, ','))
    {
        inFile>>ageu;
        inFile>>costu;
        cout<<nameu<<ageu<<costu;
        kids[i].name = nameu;
        kids[i].age = ageu;
        kids[i].toysCost = costu;
        i++;

        if(i == b)
        {
            break;
        }
    }

    calculateCost(b);

}

void Kindergarten::calculateCost(int nem){

    int total;

    for(int i = 0; i < nem; i++) {
        total += kids[i].toysCost;
    }

    cost = total;
}

void Kindergarten::get(string &nam, int &num, int &cos)const {

    nam = name;
    num = numberOfChildren;
    cos = cost;
}
/*
void Kindergarten::getCost(int &nom) {

    calculateCost(b);
}*/

void Kindergarten::print()const {

    string name;
    int number, cost;

    get(name, number, cost);


    cout<<name<<" has "<<number<<" children with toys worth"<<cost<<" dirham"<< endl;
}
