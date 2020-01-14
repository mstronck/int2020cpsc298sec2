#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

/*
Problem 4 (inflation):
It is difficult to make a budget that spans several years, because prices are not stable. If your company
needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
now. Because of inflation the cost is likely to be higher than it is today.

Write a program to gauge the expected cost of an item in a specified number of years.
The program asks for the cost of the item, the number of years from now that the item will be purchased, and the rate of inflation.
The program then outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
percentage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)
*/


int main (int argc, char **argv){
  //initializing variables
  float item_price = 0.0;
  float years_till_purchase = 0.0;
  float inf_rate = 0.0;
  float price_adj_inf = 0.0;

  //Recieving inputs
  cout << "What is the cost of the item?" << endl;
  cin >> item_price;
  cout << "How many years from now will the item be purchased?" << endl;
  cin >> years_till_purchase ;
  cout << "What is the rate of inflation? 5.6% = 5.6" << endl;
  cin >> inf_rate;

  //Performing calculations
  //conerting inflation rate to decimal
  inf_rate = inf_rate/100;

  //Calclating inflation adjusted price
  price_adj_inf = item_price; //Making these the same for the loop
  int i = 0;
  for(i = 1; i <= years_till_purchase; i = i + 1){
    price_adj_inf = price_adj_inf * (1 + inf_rate);
  }

  //Outputting adjusted price to user
  cout << "Price adjusted for inflation: " << price_adj_inf << endl;

  return 0;
}
