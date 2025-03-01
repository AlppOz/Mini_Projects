//a simple algorithm that returns the fibonacci series up to a given term
#include <iostream>
using namespace std;

int main() {
    int terms, i, next;
    int prev = 0, curr = 1; //the two start values of the Fibonacci series

    cout << "How many fibs:"; //asking the user for the number of terms of the series to be displayed
    cin >> terms;

    cout << prev << " " << curr << " "; //the two start values printed
    for (i = 0; i <= terms - 3; i++) { //loop to print the next value on the series until the term limit is hit
      next = curr + prev; //next value is always the sum of the previous two in Fibonacci series
      prev = curr; //defining the new prev for the next loop
      curr = next; //defining the new curr for the next loop
      cout << next << " ";
    }

    cout << endl;
    return 0;
}