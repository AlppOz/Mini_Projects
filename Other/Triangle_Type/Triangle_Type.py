#a simple programme that returns the type of a triangle (equilateral,isoceles or scalene) based on the cartesian coordinates (2D) of its vertices
from math import sqrt

def distance(x_1, x_2, y_1, y_2): #this function finds the distance between any two cartesian coordinates (2D)
    return sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2)) #Pythagoras' theorem for distance calculation

def veryClose(n, x): #this function decides if any two values are close to each other based on a defined factor
    CLOSENESS_FACTOR = 0.0001 #defining the desired level of closeness of the final appoximation. Lower values gives a more accurate end result
    if abs(n - x) < CLOSENESS_FACTOR:
        return True
    else:
        return False

def triangle_type(x1, y1, x2, y2, x3, y3): #this function returns the number of sides that are equal in a triangle
    d1 = distance(x1, x2, y1, y2) #lenght of side 1
    d2 = distance(x1, x3, y1, y3) #lenght of side 2
    d3 = distance(x2, x3, y2, y3) #lenght of side 3
    if veryClose(d1, d2) == True and veryClose(d1, d3) == True and veryClose(d2, d3) == True: #if all sides are equal or at least very close
        return 3 #number of sides equal
    elif veryClose(d1, d2) == False and veryClose(d1, d3) == False and veryClose(d2, d3) == False: #if none of the sides are equal or at least very close
        return 0 #number of sides equal
    else: #the only remaining case is if any two sides are equal but not all three
        return 2 #number of sides equal

print("Enter x1, y1, x2, y2, x3, y3:")
coordinates = list(map(float, input().split()))
x1 = coordinates[0]
y1 = coordinates[1]
x2 = coordinates[2]
y2 = coordinates[3]
x3 = coordinates[4]
y3 = coordinates[5]

if triangle_type(x1, y1, x2, y2, x3, y3) == 3: #if three equal sides
    print("That is equilateral.")
elif triangle_type(x1, y1, x2, y2, x3, y3) == 2: #if two equal sides
    print("That is isoceles.")
elif triangle_type(x1, y1, x2, y2, x3, y3) == 0: #if no equal sides
    print("That is scalene.")