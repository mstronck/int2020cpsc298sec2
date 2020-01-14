#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
Problem 2 (firecapacity):
Write a program that determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity. The program will read in the maximum room capacity and the number of
people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
the program announces that it is legal to hold the meeting and tells how many additional people may
legally attend. If the number of people exceeds the maximum room capacity, the program announces that
the meeting cannot be held as planned
*/

int main (int argc, char **argv){
  //initializing variables
  int room_cap = 0;
  int ppl_to_attend = 0;
  int open_cap = 0;
  int over_cap = 0;

  //recieving inputs
  cout << "Input maximum room capacity." << endl;
  cin >> room_cap;
  cout << "Input the number of people to attend the meeting." << endl;
  cin >> ppl_to_attend;

  //performing logic
  if (ppl_to_attend <= room_cap){
    cout << "It is legal to hold the meeting" << endl;
    open_cap = room_cap - ppl_to_attend;
    cout << open_cap << " additional people may legally attend." << endl;
  } else{
    cout << "Number of people exceeds the maximum room capacity." << endl;
    over_cap = ppl_to_attend - room_cap;
    cout << "The meeting cannot be held as planned." << endl;
    cout << over_cap << " people must leave to meet regulations." << endl;
  }

  return 0;
}
