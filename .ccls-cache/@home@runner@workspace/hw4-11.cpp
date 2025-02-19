// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginning, deposit, withdrawal, ending;
  
  cout << "Enter the beginning balance: ";
  cin >> beginning;
  cout << "Enter the total amount deposited: ";
  cin >> deposit;
  cout << "Enter the total amount withdrawn: ";
  cin >> withdrawal;

  ending = beginning + deposit - withdrawal;
  cout << "The ending balance is: " << ending;

  
  
  


  
  return 0;
} // end of main function

//revied by Fidel Cruz on 2/18/25