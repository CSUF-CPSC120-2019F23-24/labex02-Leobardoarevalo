// Name:
// This program calculates the area of a room.

#include <iostream>

int main()
{
  double tax,tip,total_bill,total_meal_cost;


  // welcome to the restaurant bill calculator!.
  std::cout << "What is the total meal cost?";
  std::cin >> total_meal_cost;


  // Calculate the tax and tip.
  tip = 0.2 * total_meal_cost;
  tax = .0775 * total_meal_cost;
  total_bill= tip + tax + total_meal_cost;
  std::cout << "The tax " <<tax<< "\ntip " <<tip<< "\ntotal_meal_cost " <<total_bill<<"\n";

  return 0;
}
// Name:
// This program calculates the tax and tip on a restaurant bill.
