# Class Variable --->  Shared among all instances of the class
#                      Defined outside the constructor 
#                      Allow you to share data among all objects created from that class
class student:
   class_year = 2027
   num_students = 0
   def __init__(self,name,age):
      self.name = name
      self.age = age
      student.num_students += 1


student1 = student("Spongebob",30)
student2 = student("Pranav",20)
# This is just for fun . Doing some random shit

print(student1.name)
print(student1.age)
print(student.class_year)
print(student.num_students)
print(f"My graduating class of {student.class_year} has {student.num_students} students")
