# collection --->  single "Variable " used to store multiple values
# list ---> [] ordered and changeable, Duplicates OK
# set ---> {} unordered and immutable ,but add/remove OK. NO duplicates 
# Tuples ---> () Ordered and unchangeable . Duplicates OK. FASTER

fruits = ["Apple ","Banana","Orange ","Coconut"]

print(fruits[1:3])
print(fruits[:3])
print(fruits[::2])
print(fruits[::-1])
for fruit in fruits:
   print(fruit)
#print(dir(fruits))
print(len(fruits))
print("Apple " in fruits)
fruits.append("Grape")#for adding
print(fruits)
fruits.remove("Banana")# remove 
print(fruits)
fruits.insert(1,"Mango") # inserting at positions
print(fruits)
fruits.reverse() # reversing
print(fruits)
print(fruits.index("Apple "))# knowing the index 
print(fruits.count("Grape")) # knowing the occurences
# SETS
gamnes = {"BGMI","PUBG","COC","COD"} 
#most of the things are same but sets are unordered
print(gamnes) 
#TUPLES
sports =("kabaddi","Cricket","Foot Ball","Volley Ball")
