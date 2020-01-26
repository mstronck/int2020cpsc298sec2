#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write the integers back to the screen (console output). For this exercise you
need not use any functions.
*/

int main(int argc, char **argv){
  srand(33); //setting seed
  int numberArray[10]; //declaring array of size 10
  int i = 0; //declaring i object for my loops
  for(i = 0; i < 10; ++i){
    numberArray[i] = abs((rand() % 10)); //inserting random number between 1-10 into array
  }
  for(i = 0; i < 10; ++i){
    cout << numberArray[i] << endl; //outputting each element in array
  }

  return 0;
}
