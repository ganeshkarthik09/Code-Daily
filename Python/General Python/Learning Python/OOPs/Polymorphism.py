"""
    Polymorphism ---> Greek word that means to Have many forms or faces
    TWO WAYS TO ACHIEVE POLYMORPHISM :
    1.Inheritance ---> An object could be treated of the same type as a parent class
    2. " Duck Typing "---> Object must have necessary attributes/methods 
"""
from abc import ABC,abstractmethod
class shape:
   @abstractmethod
   def area(self):
      return 3.14*self.radius ** 2

class Circle(shape):
   def __init__(self,radius):
      self.radius = radius

class Square(shape):
    def __init__(self,side):
       self.side = side
    def area(self):
       return self.side ** 2
      

class Triangle(shape):
   def __init__(self,base,height):
      self.base = base
      self.height = height
   def area(self):
      return self.base*self.height*0.5
   
class pizza(Circle) :
   def __init__(self,topping,radius):
      super().__init__(radius)
      self.topping = topping
      
     

shapes = [Circle(4),Square(5),Triangle(6,7),pizza("Corn",5)]
for shape in shapes:
   print(shape.area())
