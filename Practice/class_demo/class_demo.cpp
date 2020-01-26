#include "class_demo.h"



CPSC298Utils::CPSC298Utils(){
  //initialize variables to default values
}

//now it's time to implement my function body
int CPSC298Utils::countVowels(string input)
{
  char c = '\0';
  int count = 0;
  for(int i = 0; i < input.size(); ++i){

    c = tolower(input[i]);
    if(c == 'e'){
      count++;
    }
  }
  return count;
}
