#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (int argc, char **argv){
  float grade = 0.0;

  cout << "Yo enter your grade: " << endl;
  cin >> grade;

  if(grade >= 90){
    cout << "A" << endl;
  }
  if(grade < 90 && grade >= 80){
    cout << "B" << endl;
  }
  if(grade < 80 && grade >= 70){
    cout << "C" << endl;
  }
  if(grade <= 64){
    cout << "F" << endl;
  }

  return 0;
}
