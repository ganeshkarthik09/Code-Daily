""" super() ---> Function used in a child class to call methods from a
               parent class (super class).
               Allows you to extend the functionality of the inherited method.


"""
class shape:
   def __init__(self,colour,filled):
      self.colour = colour
      self.filled = filled
      

class circle (shape) :
   def __init__(self,colour,filled,radius):
      super().__init__(colour,filled)
      self.radius = radius
      

class square (shape):
   def __init__(self,colour,filled,width):
      super().__init__(colour,filled)
      self.width = width

class Triangle (shape) :
   def __init__(self,colour,filled,width,height):
      super().__init__(colour,filled)
      self.width = width
      self.height = height

Circle = circle("Red",True,5)
print(Circle.colour)
print(Circle.filled)
print(Circle.radius)