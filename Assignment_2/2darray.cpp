#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
Write code that will fill the array a (declared below) with
numbers typed in at the key-board. The numbers will be
input five per line, on four lines (although your solution
need not depend on how the input numbers are divided into lines).
*/

int main(int argc, char **argv){
  //Initializing variables
  const int NUMBER_OF_ROWS = 4;
  const int NUMBER_OF_COLS = 5;
  float user_input;
  int a[NUMBER_OF_ROWS][NUMBER_OF_COLS]; //declaring array that will be filled

  //Filling each slot of the 4 by 5 array
  cout << "Input 20 numbers that will be placed in an array" << endl;
  for(int r = 0; r < NUMBER_OF_ROWS; ++r){
    for(int c = 0; c < NUMBER_OF_COLS; ++c){
      cin >> user_input;
      a[r][c] = user_input; //For every combo of row and col insert what the user inputted
    }
  }


  //Making visual space in the terminal between the input section and the output section
  cout << endl;
  cout << "---------------------------------------" << endl;
  cout << endl;

  //Now for every slot of the array output the contents
  for(int r = 0; r < NUMBER_OF_ROWS; ++r){
    for(int c = 0; c < NUMBER_OF_COLS; ++c){
      cout << a[r][c] << " "; //Puts spaces between each col
    }
    cout << endl; //Makes the next 4 numbers appear on the line below
  }
  cout << endl;
  return 0;
}
