# input()---> A function that prompts the user  to enter data returns the entered data as a string

name =input("What is your name ? \n")
print(f"Hello {name} !")
 
age =input("How old are you : ")
print(f"I am {age} years old ")

print(type(age))
#age = int(age)
#print(type(age))
# instead of taking 2 lines for type casting we can do it as
age = int(input("How old are you ")) #******Important
print(type(age))
