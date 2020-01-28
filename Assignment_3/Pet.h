#include <iostream>
#include <string>
using namespace std;

/*
Create a class called Pet with all the necessary files (.h , .cpp, etc.)
This class should have member variables name (string), age (int), type
([‘dog’, ‘cat’]) (string) and weight (double). Make sure to include the
appropriate accessor (getters), mutator (setters). Once the Pet class has
been implemented, create two instances of Pet and print their details to console output.
*/

class Pet{
  public:
    Pet(); //default constructor
    Pet(string name, int age, string type, double weight); //overload constructor

    //getters
    string getName();
    int getAge();
    string getType();
    double getWeight();

    //setters
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

  private:
    string m_name;
    int m_age;
    string m_type;
    double m_weight;
};
