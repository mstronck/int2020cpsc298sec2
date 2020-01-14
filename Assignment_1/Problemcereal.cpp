#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
Problem 1 (cereal):
A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
to yield one metric ton of cereal.
*/

int main (int argc, char **argv){
  //initializing variables
  const float METRIC_TON = 35273.92; //ounces
  float user_input = 0.0;
  float weight_mt = 0.0;
  float num_boxes = 0.0;

  //recieving user input
  cout << "Input weight of ceral box in ounces" << endl;
  cin >> user_input;
  //Calculating results
  weight_mt = user_input/METRIC_TON;
  num_boxes = METRIC_TON/user_input;

  //Outputting results
  cout << "Weight in metric tons: " << weight_mt << endl;
  cout << "Number of boxes to yield 1 metric ton: " << num_boxes << endl;

  return 0;
}
