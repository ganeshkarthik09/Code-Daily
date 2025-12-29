"""
     @property ---> Decorator used to define a method as a property(It can be accused like an attribute)
                    Benifit : Add additional logic when read,write, or delete attributes
                    Gives you getter , setter , deleter method

"""
class Rectangle :
   def __init__(self,width,height):
      self._width = width
      self._height = height
   @property
   def width(self):
      return f"{self._width}"
   @property
   def height(self):
      return f"{self._height}"
rectangle = Rectangle(3,4)

print(rectangle._width)