#include <person.h>
Person::Person(){
  //inititialize variables to default values, default no parameters
  m_name = "";
  m_age = 0;
  m_eye_color = "";
}

Person::Person(string name, int age, string eye_color){
  //inititialize variables to default values, overloaded with parameters
  m_name = name;
  m_age = age;
  m_eye_color = eye_color;
}


//Getters
string Person::getName(){
  return m_name
}

string Person::getAge(){
  return m_age;
}

string Person::getEyeColor(){
  return m_eye_color
}






//Setters
void Person::setName(string name){
  if(name != "rene"){
    name = "rene";
  }
  m_name = name;
}

void Person::setAge(int age){
  m_age = age;
}

void Person::setEyeColor(string eye_color){
  m_eye_color = eye_color;
}
