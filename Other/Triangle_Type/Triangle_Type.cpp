//a simple programme that returns the type of a triangle (equilateral,isoceles or scalene) based on the cartesian coordinates (2D) of its vertices
#include <iostream>
#include <cmath> //for square root function
using namespace std;

double distance(double x_1, double x_2, double y_1, double y_2) { //this function finds the distance between any two cartesian coordinates (2D)
    return sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2)); //Pythagoras' theorem for distance calculation
}

bool veryClose(double n, double x) { //this function decides if any two values are close to each other based on a defined factor
    const double CLOSENESS_FACTOR = 0.0001; //defining the desired level of closeness of the final appoximation. Lower values gives a more accurate end result
    if (abs(n - x) <= CLOSENESS_FACTOR) {
        return true;
    }
    else {
        return false;
    }
}

int triangleType(double x1, double y1, double x2, double y2, double x3, double y3) { //this function returns the number of sides that are equal in a triangle
    double d1 = distance(x1, x2, y1, y2); //lenght of side 1
    double d2 = distance(x1, x3, y1, y3); //lenght of side 2
    double d3 = distance(x2, x3, y2, y3); //lenght of side 3
    if (veryClose(d1, d2) == true && veryClose(d1, d3) == true && veryClose(d2, d3) == true) { //if all sides are equal or at least very close
      return 3; //number of sides equal
    }
    else if (veryClose(d1, d2) == false && veryClose(d1, d3) == false && veryClose(d2, d3) == false) { //if none of the sides are equal or at least very close
      return 0; //number of sides equal
    }
    else { //the only remaining case is if any two sides are equal but not all three
      return 2; //number of sides equal
    }
}

int main() {
    double x1, y1, x2, y2, x3, y3; //defining the cartesian coordinates (2D) of the triangle's vertices

    cout << "Enter x1, y1, x2, y2, x3, y3:";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int type = triangleType(x1, y1, x2, y2, x3, y3);

    if (type == 3) { //if three equal sides
      cout << "That is equilateral.";
    }
    else if (type == 2) { //if two equal sides
      cout << "That is isoceles.";
    }
    else if (type == 0) { //if no equal sides
      cout << "That is scalene.";
    }

    return 0;
}