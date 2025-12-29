#2-D lists(We can make tuples also )
fruits     = ["Apples","Oranges","Banana","Coconut"]
vegetables = ["Celery","Carrot","Potatoes"]
meat       = ["Chickens","Fish","Turkey"]

Groceries = [fruits,vegetables,meat]
# fruits[0] = "Papaya"
#print(fruits)
print(Groceries[0]) # Gives entire list
print(Groceries[1][0]) # Gives exact thing we want


# Iterating through 2-D loop
for collection in Groceries :
   for food in collection :
      print(food,end=",")
   print()
# same for other collections
