#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (int argc, char **argv){
  float grade1 = 0.0;
  float grade2 = 0.0;
  float grade3 = 0.0;
  float grade4 = 0.0;
  float grade5 = 0.0;
  float averageboi = 0.0;
  float sum = 0.0;

  cout << "Enter 5 grades boi" << endl;
  cin >> grade1;
  cin >> grade2;
  cin >> grade3;
  cin >> grade4;
  cin >> grade5;

  int arrayboi[5] = {grade1, grade2, grade3, grade4, grade5};

  for(int i = 0; i<5 ; ++i){
      sum += arrayboi[i];
   }

   averageboi = sum/5;

   cout << "The average score is: " << averageboi << endl;
   //cout << arrayboi << endl;

  return 0;
}
