# for loop ---> Execute a block of code a fixed number of times
# You can iterate over a range ,string sequence ,etc...

for x in range(1,11,2) : # step == 2 here . Skips second number
   print(x)
print("Luffy 😁😁")

for y in reversed(range(1,11)):
   print(y)
credit_card = "1234-5678-9012"
print("Luffy 😁😁")
for x in credit_card :
   print(x)

for x in range (1,21) :
   if x == 13:
      continue
   else :
      print(x)