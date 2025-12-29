import random

#options = ("Rock","Paper","Scissors")
#low = 1
#high = 100
#number = random.randint(low,high)
#print(number)
#option = random.choice(options)
#print(option)
#This thing I am writing in this line is just to pass time and do some nonsence buisiness



#---------GAME-------------
lowest_num = 1
highest_num = 100
answer = random.randint(lowest_num,highest_num)
print(answer)
guesses = 0
is_running = True

print("Python number guessing game ")
print(f"Select a number between {lowest_num} and {highest_num}")
while is_running :
   guess = input("Enter your guess :")
   if guess.isdigit():
      guess = int(guess)
      guesses += 1
      if guess < lowest_num or guess> highest_num :
         print("This number is out of range ")
         print(f"Select a number between {lowest_num} and {highest_num}")
      elif guess < answer :
         print("Too low Try Again")
      elif guess > answer :
         print("Too high try again") 
      else :
         print(f"CORRECT . The answer was {answer}")
         print(f"The number of attempts : {guesses}")
         is_running = False
   else :
      print("Invalid Guess ")
      print(f"Select a number between {lowest_num} and {highest_num}")
