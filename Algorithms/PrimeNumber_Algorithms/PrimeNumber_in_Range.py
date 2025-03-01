#a simple algorithm that returns all the prime numbers in a specified range
from math import sqrt
base, top = map(int, input("Range:").split())

def isPrime(z):
    isprime = True
    if z <= 1:
        isprime = False
    else:
        for i in range(2, int(sqrt(z)) + 1):
            if z % i == 0:
                isprime = False
                break
    return isprime

for i in range(base, top + 1):
    if isPrime(i) == True:
        print(i)