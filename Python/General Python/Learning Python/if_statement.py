# if ---> Do some code only if some condition is true
#   else do something else 

age = int(input("Enter your age : "))
if age >= 18 :
   print("You are eligible ")
elif age < 0:
   print(" You haven't been born yet !")
else : 
   print("You are not eligible ")