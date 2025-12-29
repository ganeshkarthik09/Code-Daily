"""
Class Method ---> Allow operations related to the class itself
                  Take (cls) as the first parameter, which represents the class itself. 
"""

class Student :
   count = 0
   total_gpa = 0
   def __init__(self,name,gpa):
      self.name = name
      self.gpa = gpa
      Student.count += 1
      Student.total_gpa += gpa
   def get_info(self):
      return f"{self.name} {self.gpa}"
   
   @classmethod
   def get_count(cls):
      return f"Total number of students : {cls.count}"
   @classmethod
   def get_avg_gpa(cls):
      if cls.count == 0 :
         return 0
      else :
         return f"{cls.total_gpa/cls.count}"
Student1 = Student("Pranav",4.5)
Student2 = Student("Jatin",4.0)
Student3 = Student("VGK",3.5)
print(Student.get_count())
print(Student.get_avg_gpa())