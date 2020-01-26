#include <iostream>
using namespace std;

int main(int argc, char **argv){

  int myVar = 5;
  int *myPtr = &myVar;

  cout << "myvar: " << myVar << endl;
  cout << "myPtr: " << myPtr << endl;
  cout << "deref myPtr: " << *myPtr << endl;

  *myPtr = 8;
  //myPtr = (int *) "addres"; what does this do
  cout << "myVar after update: " << myVar << endl;


  return 0;
}
