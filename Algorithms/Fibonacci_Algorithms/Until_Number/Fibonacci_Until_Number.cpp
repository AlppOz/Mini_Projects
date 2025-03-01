//a simple algorithm that returns the fibonacci series up to a given number
#include <algorithm>
#include <iostream>
#include <bits/ranges_algo.h>
using namespace std;

int main() {
    int limit, prev = 0, curr = 1, next = 0, count = 2;

    cout << "Fibs below what:";
    cin >> limit;

    cout << prev << " " << curr << " ";
    while (next < limit) {
        next = curr + prev; //next value is always the sum of the previous two in Fibonacci series
        prev = curr; //defining the new prev for the next loop
        curr = next; //defining the new curr for the next loop
        if (next < limit) { //only printing when below the limit, excluding the last loop where it overshoots
            cout << next << " ";
            count = count + 1;
        }
    }

    cout << "\nThat was " << count << " terms.\n";

    return 0;
}
