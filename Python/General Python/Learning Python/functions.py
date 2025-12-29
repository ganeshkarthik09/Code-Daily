# function ---> A block of reusable code
#                place() after the function name to invpke it
# 
def happy_BD(name) :
   print(f"Happy birth day to  {name}")

happy_BD("Bro")
happy_BD("Steve")
happy_BD("PR")


# Position of parameters and arguments matter

def display_invoice(username, amount, due_date) :
   print(f"Hello {username}")
   print(f"Your bill of ${amount:.2f} is due : {due_date}")

display_invoice("Pranav", 45 ,"01-01-2025")


# return ---> Statement used to end a function and send a result back to the caller

def add(x,y) :
   z = x+y
   return z
def subtract(x,y) :
   z = x-y
   return z

def multiply(x,y) :
   z = x*y
   return z
def division(x,y) :
   z = x/y
   return z


print(add(2,3))
print(subtract(4,5))
print(multiply(9,8))
print(division(8,2))
