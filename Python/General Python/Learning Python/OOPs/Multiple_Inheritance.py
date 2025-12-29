"""
Multiple_inheritance ---> inherit from more than one parent class
                           C(A,B)
Multilevel_Inheritance ---> Inherit from a parent which inherit from another parent 
                           C(B) <-B(A)<-A

"""
class Animal:
   def __init__(self,name):
      self.name = name
   def eat(self):
      print(f"This {self.name} is eating")
   def sleep(self):
      print(f"This {self.name} is sleeping")

class prey (Animal):
   def flee(self):
      print(f"This {self.name} is fleeing")
class Predator(Animal) :
   def hunt(self):
      print(f"This {self.name} is hunting")

class Rabbit(prey) :
   pass
class Hawk(Predator):
   pass
class Fish(prey,Predator):
   pass

rabbit = Rabbit("Kund")
hawk = Hawk("Mee")
fish = Fish("Jim")

fish.flee()
rabbit.eat()
fish.eat()