#Countdown timer program
import time
my_time = int(input("Enter the time in seconds : "))
for x in range(0,my_time):
   print(x)
   time.sleep(1)
 

#time.sleep(3)#c haults for 3 seconds
# Backwards 
print("Time's up !")
for x in range(my_time,0,-1):
   print(x)
   time.sleep(1)
print("Time's up !")
# Digital clock
for x in range(my_time,0,-1) :
   seconds = x % 60
   minutes = int(x/60) % 60
   hours = int(x/3600)
   print(f"{hours:02}:{minutes:02}:{seconds:02}")
   time.sleep(1)
print("Time's up !")