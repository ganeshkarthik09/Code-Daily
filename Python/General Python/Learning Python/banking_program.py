# Banking program in python
import time
def show_balance(balance):
   print("***************")
   print(f"Your balance is ${balance: .2f}")
   print("***************")
def deposit():
   amount = float(input("Enter the amount you want to deposit :  "))
   if amount < 0 :
      print("Invalid amount. Amount should be greater than 0 ")
      return 0
   else:
    return amount

def withdrawl(balance):
   amount = float(input("Enter the amount you want to withdraw :  "))
   if amount < 0 :
      print("Invalid amount. Amount should be greater than 0 ")
      return 0
   elif amount > balance :
      print("Insufficient balance ")
      return 0
   else :
      return amount
   

import os
import platform

def clear_screen():
    # Windows
    if platform.system() == "Windows":
        os.system('cls')
    # Mac or Linux
    else:
        os.system('clear')

def main():
  
   balance = 0 
   is_running = True
   while is_running :
      
      print("***************")
      print("Banking Program")
      print("***************")
      print("1.Show Balance")
      print("2.Deposit")
      print("3.Withdrawl")
      print("4.Exit")
      choice = int(input("Enter your choice (1-4) : \n"))
      match choice :
         case 1 : 
            show_balance(balance)
         case 2 : 
           balance += deposit()
         case 3 : 
           balance -= withdrawl(balance)
         case 4 :
            is_running =  False
         case _ :
            print("Invalid Choice") 
      time.sleep(5)
      clear_screen()

if __name__ == '__main__':
   main()
   print("Thanks , Have a nice day ! ")