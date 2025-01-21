#swapping two variables
a = int(input("Enter the value of A: "))
b = int(input("Enter the value of B: "))

print("Before swapping A = {} and B = {}.".format(a, b))

a = b - a
b = b - a
a = a + b

print("After swapping A = {} and B = {}.".format(a, b))
