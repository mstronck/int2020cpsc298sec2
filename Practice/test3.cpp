#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (int argc, char **argv){
/*
  if(argc < 2){
    cout << "invalid, segmentation fault dog" << argc << endl;
    exit(-1);
  }
  */
  cout << "Command line arg count: " << argc << endl;

  cout << "My name is " << argv[1] << endl;

  cout << "hi" << endl;
  cout << "I had to make this statement because Rene said so" << endl;
  return 0;
}
