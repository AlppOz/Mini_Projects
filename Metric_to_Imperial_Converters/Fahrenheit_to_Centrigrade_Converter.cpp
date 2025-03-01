//a simple programme to convert fahrenheit to centigrade

#include <iostream>
using namespace std;

int main () {
    double fahrenheit, centigrade;
	
    cout << "Enter fahrenheit temperature:";
    cin >> fahrenheit;

    centigrade = (fahrenheit - 32) * 5.0 / 9; //centigrade conversion

    cout << fahrenheit << " degrees fahrenheit is " << centigrade << " degrees centigrade.";

    return 0;
}