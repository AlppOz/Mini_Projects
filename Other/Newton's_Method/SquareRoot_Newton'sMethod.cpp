//a simple algorithm that approximates the square root of a number using Newton's method
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double newton_sqrt(double n, double init); //pre-defining the function

double better_approx(double n, double pre) { //function that returns a better approximation
  double newr = ((n / pre) + pre) / 2; //Newton's method formula
  return newr;
}

bool close_enough(double n, double x) {
  double test = pow(x, 2);
  const double CLOSENESS_FACTOR = 0.0001; //defining the desired level of closeness of the final appoximation. Lower values gives a more accurate end result
  if (abs(n - test) <= CLOSENESS_FACTOR) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
    double n;
    double approx;
    cout << "Enter n:";
    cin >> n;
    approx = newton_sqrt(n, n/2); //n/2 is an arbitrary initial approximation.
    cout << fixed << setprecision(6);
    cout << "The square root of " << n;
    cout << " is approx " << approx << endl;

    return 0;
}

double newton_sqrt(double n, double init) {
  while (close_enough(n, init) == false) {
    init = better_approx(n, init);
    cout << fixed << setprecision(6) << init << endl;
  }
  return init;
}