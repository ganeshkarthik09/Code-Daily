import math
radius = float(input("Enter the radius of the circle : "))
circumferance = math.pi * 2 * radius
print(f"The circumference of the circle is {round(circumferance,2)}")
area = math.pi * math.pow(radius,2)
print(f"The area of the circle is {round(area,2)}")


#Hypotenuse of a right angled triangle
A = float(input("Enter side A : "))
B = float(input("Enter side B : "))
H = math.sqrt(A **2 + B ** 2)
print(f"Hypotenuse of a right angled triangle is : {H}")