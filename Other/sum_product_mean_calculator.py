#intro
print("Welcome to number list calculator!\nwe can find the sum, product and average of your numbers!")
inputy = input("Write your numbers\n")

#list
if inputy.find(" ") >= 0:
  if inputy.find(",") >= 0:
    listy = inputy.split(", ")
  elif inputy.find(",") < 0:
    listy = inputy.split(" ")
elif inputy.find(" ") < 0:
  if inputy.find(",") >= 0:
    listy = inputy.split(",")

newlisty = list(map(float,listy))

#addition
sum = sum(newlisty)

#multiplacion
import math
product = math.prod(newlisty)

#average
mean = sum / len(newlisty)

#choice
rawdesicion = input("Now, do you want the sum, product, average or all?\n")
desicion = rawdesicion.lower()

#answer
if desicion == "sum":
  print(f"Here is the sum of your numbers;\n{sum}")
elif desicion == "product":
  print(f"Here is the product of your numbers;\n{product}")
elif desicion == "average":
  print(f"Here is the average of your number;\n{mean}")
else:
  print(f"Here you go;\nsum: {sum}\nproduct: {product}\naverage: {mean}")