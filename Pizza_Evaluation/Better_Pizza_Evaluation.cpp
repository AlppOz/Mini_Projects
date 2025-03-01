//a simple programme that indicates which out of two pizzas have a better evaluation
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1415;
    double price1, price2, area1, area2, diameter1, diameter2, ppsi1, ppsi2;

    cout << "Enter the diameter and price of the first pizza:";
    cin >> diameter1 >> price1;

    area1 = PI * (diameter1 / 2.0) * (diameter1 / 2.0);
    ppsi1 = price1 / area1;

    cout << "Enter the diameter and price of the second pizza:";
    cin >> diameter2 >> price2;

    area2 = PI * (diameter2 / 2.0) * (diameter2 / 2.0);
    ppsi2 = price2 / area2;

    if (ppsi1 < ppsi2) {
      cout << "FIRST";
    }
    else if (ppsi1 > ppsi2) {
      cout << "SECOND";
    }
    else {
      cout << "SAME";
    }

    cout << endl;

    return 0;
}