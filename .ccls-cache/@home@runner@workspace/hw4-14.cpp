// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  int small, medium, large, family;
  
  double smallPercent, mediumPercent, largePercent, familyPercent;
  
  cout << "Number of small pizzas sold: ";
  cin >> small;
  cout << "Number of medium pizzas sold: ";
  cin >> medium;
  cout << "Number of large pizzas sold: ";
  cin >> large;
  cout << "Number of family pizzas sold: ";
  cin >> family;

  
  cout << "Total number of pizzas sold: " << small + medium + large + family;

  double smallpercent = small / (small + medium + large + family) * 100;
  double mediumpercent = medium / (small + medium + large + family) * 100;
  double largepercent = large / (small + medium + large + family) * 100;
  double familypercent = family / (small + medium + large + family) * 100;
  
  cout << "Percentage of small pizzas sold: " << smallpercent << "%";
  cout << "Percentage of medium pizzas sold: " << mediumpercent << "%";
  cout << "Percentage of large pizzas sold: " << largepercent << "%";
  cout << "Percentage of family pizzas sold: " << familypercent << "%";

  

  return 0;
} // end of main function

//revised by Fidel Cruz on 2/18/25 