#include <iostream>
using namespace std;


int main() {

float pizzaRadius, pizzaPrice, pizzaSquareInch, pizzaPriceSquareInch;

cout<<"Please insert the radius of the pizza in inches:";
 cin>> pizzaRadius;

cout<<"Please insert the price of the pizza:";
 cin>> pizzaPrice;

pizzaSquareInch = pizzaRadius * pizzaRadius * 3.1416;

pizzaPriceSquareInch =  pizzaPrice / pizzaSquareInch;

cout<<"The price of the pizza per square inch is:"<<pizzaPriceSquareInch;

return 0;
}
