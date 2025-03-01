// a simple programme that converts feet and inches to centimetres
//1 foot is 12 inches and 1 inch is 2.54cm

#include <iostream>
using namespace std;

int main() {
    int ft, in;
    //double cm;

    cout << "Enter feet value:";
    cin >> ft;

    cout <<"Enter inches value:";
    cin >> in;

    double cm = ((ft * 12) + in) * 2.54;

    cout << ft << " feet " << in << " inches is " << cm << "cm.";

    return 0;
}