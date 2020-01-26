#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
Write a program that will read in a length in feet and inches and
output the equivalent length in meters and centimeters. Use at least
three functions: one for user input, one or more for calculating, and one
for output(console). Include a loop that lets the user repeat this computation
for new input values until the user says he or she wants to end the program
(user has to type exit). There are 0.3048 meters in a foot, 100 centimeters in
a meter, and 12 inches in a foot.
*/



void user_input_function(float &USA_len_ft, float &USA_len_inch);
void conversion_function(float USA_len_ft, float USA_len_inch, float &metric_len_m, float &metric_len_cm);
void output_to_terminal_function(float metric_len_m, float metric_len_cm);


//MAIN METHOD --------------------------------------------------------------
int main(int argc, char **argv){
  //Initializng variables
  string user_input = "";
  bool user_decision = true;
  float USA_len_ft = 0.0;
  float USA_len_inch = 0.0;
  float metric_len_m = 0.0;
  float metric_len_cm = 0.0;

  //While loop that will keep the program going until user types in exit
  while(user_decision){
    //input
    user_input_function(USA_len_ft, USA_len_inch);
    //calculation
    conversion_function(USA_len_ft, USA_len_inch, metric_len_m, metric_len_cm);
    //output
    output_to_terminal_function(metric_len_m, metric_len_cm);

    //Prompting the user to exit the program
    cout << "Do you wish to exit the program?: " << endl;
    cin >> user_input;
    if(user_input == "exit"){
      user_decision = false;
    }
  }
  return 0;
}


//FUNCTIONS ----------------------------------------------------------------
//Using pass by reference because I have two outputs
void user_input_function(float &USA_len_ft, float &USA_len_inch){
  bool user_decision = true;
  cout << "Input feet" << endl;
  cin >> USA_len_ft;

  cout << "Input inches" << endl;
  cin >> USA_len_inch;

}

void conversion_function(float USA_len_ft, float USA_len_inch, float &metric_len_m, float &metric_len_cm){
  //Intializing conversion ratios and variables
  const float M_PER_FT = 0.3048;
  const float CM_PER_M = 100.0;
  const float INCH_PER_FT = 12.0;
  metric_len_m = (M_PER_FT*USA_len_ft);
  metric_len_cm = (((USA_len_inch/INCH_PER_FT)*M_PER_FT)*CM_PER_M);
}

void output_to_terminal_function(float metric_len_m, float metric_len_cm){
  cout << "That length in the metric system is " << metric_len_m;
  cout << " meters and " << metric_len_cm << " centimeters." << endl;
}
