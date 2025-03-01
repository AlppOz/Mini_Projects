//a simple programme to compute the area of a circular track and the distance of one lap along its centre
#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.1415;

double ring_area(double outerD, double innerD);
double ring_distance(double outerD, double innerD);

int main() {
    double outerD, innerD;

    cout << "Enter outer and inner diameters:";
    cin >> outerD >> innerD;

    double area = ring_area(outerD, innerD);
    double distance = ring_distance(outerD, innerD);

    cout << "Area:" << area << " Distance:" << distance << endl;

    return 0;
}

double ring_area(double outerD, double innerD) {
  double radius_big = outerD/2, radius_small = innerD/2;
  return (PI * pow(radius_big, 2)) - (PI * pow(radius_small, 2));
}

double ring_distance(double outerD, double innerD) {
  double radius_big = outerD/2, radius_small = innerD/2;
  double radius_new = ((radius_big - radius_small)/2) + radius_small;
  return 2 * PI * radius_new;
}
