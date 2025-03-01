//a simple programme that converts cm to yards, feet & inches
#include <iostream>
#include <cmath> //for the round function
using namespace std;

int main () {
    double cm;
    int inch_total, inch_total_except_yards, inch_end, yards, feet;

    cout << "Enter a length in centimetres:";
    cin >> cm;

    inch_total = round((1.00 / 2.54) * cm); //1 inch is 2.54cm
    yards = inch_total / 36; //a yard is 3 feet or 36 inches
    inch_total_except_yards = inch_total % 36;
    feet = inch_total_except_yards / 12; //a foot is 12 inches
    inch_end = inch_total_except_yards % 12;

    cout << cm << "cm is approx. " << inch_total << " inches which is " << yards << " yards, " << feet << " feet and " << inch_end << " inches.\n";

    return 0;
}