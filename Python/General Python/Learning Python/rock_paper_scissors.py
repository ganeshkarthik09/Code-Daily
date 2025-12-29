import random
options = ("rock","paper","scissors")
running = True
while running == True :
   player = None
   computer = random.choice(options)
   while player not in options :
      player = input("Enter a choice : (rock,paper,scissors)")
   print(f"Player : {player}")
   print(f"computer : { computer}")

   if player == computer :
      print("It is a tie !")
   elif player == "rock" and computer == "scissors" :
      print("Yoy win")
   elif player =="paper" and computer == "rock" :
      print("Yoy win")
   elif player == "scissors"  and computer == "paper" :
      print("Yoy win")
   else :
      print("Yoy lose !!")
   
   if not input("Play again?(Y/N) : ").lower() == "y" :
      running = False
print("Thanks for playing !")