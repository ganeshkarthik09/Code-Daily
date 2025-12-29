# Python weight converter
weight = float (input("Enter your weight  "))
unit = input("KG's or pounds (K or L)  :")
if unit == "K" :
   weight *= 2.205
   unit = "L"
elif unit == "L" :
   weight /= 2.205
   unit = "Kgs"
else : 
   print(f"{unit} is invalid")



print(f"Your weight is  : {weight} {unit}")