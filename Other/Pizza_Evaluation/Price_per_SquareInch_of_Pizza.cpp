//a simple programme that gives a better evaluation of pizza based on its area
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const double PI = 3.1415;
  double price, area, diameter, ppsi;

  cout << "Enter the diameter:";
  cin >> diameter;

  cout << "Enter the price:";
  cin >> fixed >> setprecision(2) >> price;

  area = PI * (diameter / 2.0) * (diameter / 2.0);
  ppsi = price / area;

  cout << fixed << setprecision(2) << "The price per square inch of that pizza is " << ppsi*100 << " cent\n";

  return 0;
}
