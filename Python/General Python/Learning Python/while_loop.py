# while mloop ---> Execute some code while some condition remains true

name = input("Enter your name ")

while name =="":
   print("You did not enter your name ")
   name = input("Enter your name ") # This line is preventing infinite loop
   
print(f"Hello {name}")

food = input("Enter a food you like (q to quit): ")
while not food == "q":
   print(f"You like {food}")
   food = input("Enter another food you like (q to quit): ")
print("Bye")


num = int(input("Enter a Number between 1 - 10 :"))
while num < 1  or num > 10 :
   print(f"{num} is not valid")
   num = int(input("Enter a Number between 1 - 10 :"))
print(f"Your number is {num}")