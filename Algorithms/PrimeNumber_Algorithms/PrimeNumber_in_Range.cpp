//a simple algorithm that returns all the prime numbers in a specified range
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
  bool isPrime = true;
  if (n <= 1) {
    isPrime = false;
  }
  else {
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
  }
  return isPrime;
}

int main() {
    int base, top;
    cout << "Range:";
    cin >> base >> top;

    for (int i = base; i <= top; i++) {
      if (isPrime(i) == true) {
        cout << i << " ";
      }
    }

    cout << endl;

    return 0;
}