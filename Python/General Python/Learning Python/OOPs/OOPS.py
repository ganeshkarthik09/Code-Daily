# Object Oriented Programming in python


# Object ---> A bundle of related attributes (Variabes ) and methods (functions )
#             EX:: Phone ,cup, book
#             You need a class to create many objects

#   class ---> (Blueprint) used to design the structure and layout of an object 
class car :
   def __init__(self,model,year,colour,for_sale):
      self.model = model
      self.year = year
      self.colour = colour
      self.for_sale = for_sale
   def drive(self):
      print(f"You Drive the  {self.colour} {self.model} ")
   def stop(self):
      print(f"You stop the  {self.colour} {self.model}")
   def describe(self):
      print(f"{self.year}   {self.colour} {self.model}")


car1 = car("Mustang",2024,"red",False)
car2 = car("Corvette",2025,"Blue",True)
print(car1.model) # Here " . " is called attribute access operator

print(car2.colour)
car1.drive()
car1.stop()
car1.describe()
