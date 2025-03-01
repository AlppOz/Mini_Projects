//a simple programme that produces a table of ROI values at different rates and years
#include <iostream>
#include <iomanip> //for io manipulation//
#include <cmath> //for the pow function//
using namespace std;

int main() {
    //definitions of variable
    const int YEAR_MIN = 5; //define the minimum number of years the investor plans wait before cashing in
    const int YEAR_MAX = 30; //define the maximum number of years the investor plans wait before cashing in
    const int YEAR_INCR = 5; //define the increment in years to be displayed on the table
    const double RATE_MIN = 0.05; //define the minimum rate the investor is willing to take
    const double RATE_MAX = 0.1; //define the maximum rate the investor is willing to take
    const double RATE_INCR = 0.005; //define the increment in rate to be displayed on the table
    int year;
    double rate, balance, initial_balance;

    //asking the user for their initial investment value
    cout << "Enter initial investment amount:";
    cin >> initial_balance;

    //defining the layout of the table
    cout << right << setw(10) << "Rate";
    for (year = YEAR_MIN; year <= YEAR_MAX; year = year + YEAR_INCR) {
        cout << setw(4) << year << " years";
    }

    //the return on investment calculation made in a nested loop and displayed according to the layout
    cout << setprecision(2) << fixed << endl;
    for (rate = RATE_MIN; rate <= RATE_MAX + 0.005; rate = rate + RATE_INCR) {
        cout << right << setw(10) << rate * 100;
        for (year = YEAR_MIN; year <= YEAR_MAX; year = year + YEAR_INCR) {
            balance = initial_balance * pow(1 + rate, year); //main calculation of ROI
            cout << setw(10) << balance;
        }
        cout << endl;
    }

    return 0;
}