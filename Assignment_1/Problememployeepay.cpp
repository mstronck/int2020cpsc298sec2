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
  const float ss_tax = .06;
  const float fed_tax = .14;
  const float state_tax = .05;
  const int med_ins = 10; //$ dollars


  return 0;
}
