#a simple algorithm that approximates the square root of a number using Newton's method
n = int(input("Enter n:"))

def better_approx(n, pre):
    newr = ((n / pre) + pre) / 2
    return newr

def close_enough(n, x):
    test = pow(x, 2)
    if abs(n - test) < 0.0001:
        return True
    else:
        return False

def newton_sqrt(n, init):
    while not close_enough(n, init):
        init = round(better_approx(n, init), 6)
        print(init)
    return init

approx = round(newton_sqrt(n, n/2), 6)
print("The square root of ", n," is approx " , approx)