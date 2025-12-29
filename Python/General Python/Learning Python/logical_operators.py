# logical operator ---> Evaluate multiple condition (or ,and, not )
#                       or ---> at least one condition must be true 
#                        and---> both conditions must be true
#                        not ---> Inverts the condition (not false or not true)

temp  = 30
is_raining = False 
is_sunny = False
if temp > 35 or temp < 0 or is_raining :
   print("The event is cancelled ")
else :
   print("The event is still scheduled ")



if temp >= 29 and not is_sunny :
   print("It is Hot outside 🥵🥵 ")
   print("It is cloudy ")
elif temp <= 0 and  is_sunny :
   print("It is cold out side 🥶🥶")
   print("It is sunny ")
elif temp< 28 and temp > 0 and is_sunny:
   print("It is warm Outside ")
   print("It is sunny ")