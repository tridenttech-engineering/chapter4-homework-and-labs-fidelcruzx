//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
  double sales, commission, commissionRate;
  cout << "Enter the sales amount: $";
  cin >> sales;
  cout << "Enter the commission rate: "; 

  commission = sales * commissionRate;

  cout << "The salesperson's commission is $" << commission << endl;


  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/