#TypeCasting ---> The process of converting a variable from one data type to another 
#                     str(),int(),float(),bool()
name = "Ganesh"
age = 20
GPA = 6.51
print(type(name))
print(type(GPA))
GPA =int(GPA)
print(type(GPA))
print(GPA)

age = str(age)
print(type(age))
age += "1"
print(age)
name = bool(name)
print(type(name))
print(name)