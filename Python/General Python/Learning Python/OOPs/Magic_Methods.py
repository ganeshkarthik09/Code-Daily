"""
      Magic Methods ---> Dunder methods(double underscore) __init__,__str__,__eq__
                         THey are automatically called by many of pythons built in operations
                         They allow developers to define or customize the behavior of objects

"""

class Book :
   def __init__(self,title,author,num_pages):
      self.title = title
      self.author = author
      self.num_pages = num_pages
   def __str__(self):
       return f"{self.title} by {self.author}"

book1 = Book("Power","Robert",490)
book2 = Book("Harry Potter","J.K Rowling",223)

print(book1)
print(book1 == book2)