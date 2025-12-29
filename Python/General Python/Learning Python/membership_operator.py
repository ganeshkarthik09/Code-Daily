#membership operator ---> Used to wether a value or variable i sfound in a sequence (string,list,tuple,set,or dictionary)
#                        1.in
#                        2.not in


word = "Apple"
letter = input("Guess a letter in the secrete word :")
if letter in word :
   print(f" There is a {letter}")
else :
   print(f"{letter} was not found")


students = {"Pranav","Jatin","Aryan"}

student = input("Enter the name of the student :")
if student in students :
   print(f"{student} is a student")
else :
   print(f"{student} is not a student")