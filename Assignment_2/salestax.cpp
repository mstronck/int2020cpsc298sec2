#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
 Implement a function called addTax. The function addTax has two
 formal parameters: taxRate, which is the amount of sales tax
 expressed as a percent; and cost, which is the cost of an item before
 tax. The function returns the value (float) of cost so that it includes
 sales tax.
*/

float addTax(float taxRate, float cost);



int main(int argc, char **argv){
  //Initializing variables
  float cost;
  float taxRate;

  //Asking user for inputs
  cout << "Input your cost then the tax rate as a whole number: " << endl;
  cin >> cost;
  cin >> taxRate;

  //Performing calculation and outputting
  cout << "Your total is: ";
  cout << addTax(taxRate, cost) << endl;

  return 0;
}




float addTax(float taxRate, float cost){
  int tax_in_dollars;
  tax_in_dollars = (cost * (taxRate/100));
  return (cost + tax_in_dollars);
}
