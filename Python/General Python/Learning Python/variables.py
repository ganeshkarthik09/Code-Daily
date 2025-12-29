# Variable = A container for a value (string ,integer,float,boolean)
# A variable behaves as if it was the value it contains
first_name = "Vislavath"
print(first_name)
#f - string
# ---> To use formatted string literals begin a string with f or F before the opening quotation mark or triple quotation mark .
#        inside this string you can write a python expression between {and} characters that can refer to variables or literal values.


#---Strings----
print(f"Ganesh  {first_name}")
food =  "Apple"
print(f"I like {food}")

#Integers
age = 20
print(f"You are {age} years old")

# floats
GPA = 6.51
print(f"You'r GPA is {GPA}")

# boolean 
is_student = True  # True or False only
print(f"You are a student ? : {is_student}")
is_online = True
if is_online:
   print(f"You are online ")
else:
   print(f"You are offline")