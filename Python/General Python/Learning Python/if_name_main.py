# if__name__ == __main__:(this script can be imported OR run standalone)
#                         functions and classes in this module can be reused
#                          without the main block of code executing



# print(dir())
def fav_food(food) :
   #Program goes here
   print(f"Your favorite food is {food}")

def main():
   print("This is script1")
   fav_food("pizza")
   print("Goodbye !")

if __name__ == '__main__' :
   main()


#It is good practice (Code is modular,helps readability,leaves no global variable,avoid unintended execution)
