#Temperature converter
unit = input("Is this temperature in celcius or fahrenheit (C/F) :  ")
temp =float(input("Enter the temperature : "))
if unit == "C" : 
   print(round((9*temp)/5+32,1))
elif unit == "F" :
   print(round(temp -32)*5/9,1)
else :
   print(f"{unit} is an invalid unit of measurement")