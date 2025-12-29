""" Inheritance --->  Allows a class to inherit the attributes and methods from other class.
                      Helps withcode reusability and extensibility
                      class child(parent)"""

class Animal :
   def __init__(self,name):
      self.name = name
      self.is_alive = True
   def eat(self):
      print(f"{self.name} is eating")
   def sleep(self):
      print(f"{self.name} is sleeping")

class Dog(Animal):
   def speak(self):
    print("Bhau!")

class Cat(Animal):
   def speak(self):
    print("Meow!")

dog = Dog("Rock")
cat = Cat("Kuma")

print(dog.name)
cat.sleep()
cat.speak()