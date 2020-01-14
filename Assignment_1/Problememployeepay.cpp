#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
Problem 3 (employeepay):
An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
are paid at the overtime rate of one and one-half times that. From the worker’s gross pay,
6% is withheld for Social Security tax,
14% is withheld for federal income tax,
5% is withheld for state income tax, and
$10 per week is withheld for medical insurance.
Write a program that will read in the number of hours
worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.
*/

int main (int argc, char **argv){
  //initializing variables
  const float pay_rate = 16.00;
  const float ot_pay_rate = pay_rate * 1.5;
  const float ss_tax_rate = .06;
  const float fed_tax_rate = .14;
  const float state_tax_rate = .05;
  const int med_ins = 10; //$ dollars
  float hours_worked = 0.0;
  float ot_hours_worked = 0.0;
  float netincome = 0.0;

  //Recieving user input
  cout << "Input the number of normal hours worked in a week." << endl;
  cin >> hours_worked;
  cout << "Input the number of over time horus worked in a week." << endl;
  cin >> ot_hours_worked;

  //Calculating take-home pay
  netincome = (hours_worked * pay_rate) + (ot_hours_worked * ot_pay_rate);
  // Social Security
  float ss_tax = netincome * ss_tax_rate;
  netincome = netincome - (netincome * ss_tax_rate);
  //Federal income tax
  float fed_tax = netincome * fed_tax_rate;
  netincome = netincome - (netincome * fed_tax_rate);
  //state income tax
  float state_tax = netincome * state_tax_rate;
  netincome = netincome - (netincome * state_tax_rate);
  //medical insurance
  netincome = netincome - med_ins;

  //Outputting to user
  cout << "Net income: " << (hours_worked * pay_rate) + (ot_hours_worked * ot_pay_rate)<< endl;
  cout << "Social Security tax: " << ss_tax << endl;
  cout << "Federal income tax: " << fed_tax << endl;
  cout << "State income tax: " << state_tax << endl;
  cout << "Medical Insurance Expense: " << med_ins << endl;
  cout << "----------------------------------------" << endl;
  cout << "Take-home pay: " << netincome << endl;

  return 0;
}
