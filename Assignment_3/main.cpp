#include "Pet.h"

int main(int argc, char **argv){
  Pet *p_dog = new Pet("Mike", 4, "dog", 60); //creating and inputting instance 1

  Pet *p_cat = new Pet("Sazz", 3, "cat", 9); //creating and inputting instance 2

  //Using getters to output to terminal for instance 1
  cout << "Contents of instance 1: " << endl;
  cout << "name: " << p_dog->getName() << endl;
  cout << "age: " << p_dog->getAge() << endl;
  cout << "type: " << p_dog->getType() << endl;
  cout << "weight: " << p_dog->getWeight() << endl << endl;

  //Using getters to output to terminal for instance 2
  cout << "Contents of instance 2: " << endl;
  cout << "name: " << p_cat->getName() << endl;
  cout << "age: " << p_cat->getAge() << endl;
  cout << "type: " << p_cat->getType() << endl;
  cout << "weight: " << p_cat->getWeight() << endl;

  //deleting the pointer off the heap
  delete p_dog;
  delete p_cat;

  return 0;
}
