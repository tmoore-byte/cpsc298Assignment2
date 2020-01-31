#include <iostream>
using namespace std;

// taxRate = amount of sales tax as a percent // cost = cost of item before tax
float addTax(double taxRate, double cost){
  taxRate /= 100;
  cost += (cost * taxRate);
  return cost;
}
