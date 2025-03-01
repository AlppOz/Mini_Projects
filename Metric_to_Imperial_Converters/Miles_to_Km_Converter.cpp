//a simple programme that converts distance in miles to the equivalent km value
#include <iostream>
using namespace std;

int main() {
    double miles, km; 

    cout << "Enter the number of miles:\n";
    cin >> miles;

    km = miles * 1.609344; //km conversion

    cout << miles << " miles is " << km << "km.\n";

    return 0;
}