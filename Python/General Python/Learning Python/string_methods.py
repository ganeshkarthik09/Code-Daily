name = input("Enter youur name :")
result = len(name)#length of the string
print(result)
result1 = name.find("a")#First occurence of the literal
print(result1)
result2 = name.rfind("a")# Last occurence
print(result2)
# If we pass literal which is not in the atring it will return -1
name = name.capitalize()
print(name)
name = name.upper()
print(name)
result23 = name.count("A")
print(result23)
name = name.replace("K","G")
print(name)