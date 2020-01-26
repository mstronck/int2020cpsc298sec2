#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets
the values of both variables to 0.
*/

void zeroBoth(int& first, int& second);

int main(int argc, char **argv){
  //initializing variables
  int first = 0;
  int second = 0;

  //asking for user input
  cout << "Input two numbers:" << endl;
  cin >> first;
  cin >> second;

  //using function
  zeroBoth(first, second);

  //Outputting results of the variables post function
  cout << "Your numbers are now zeros" << endl;
  cout << "first: " << first << endl;
  cout << "second: " << second << endl;

  return 0;
}

//Creating the function that turns its two int inputs into zeros
void zeroBoth(int& first, int& second){
  first = 0;
  second = 0;
}
