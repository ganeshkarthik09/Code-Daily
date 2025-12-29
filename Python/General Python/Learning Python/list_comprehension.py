# list comprehension ---> A conscise way to create lists in python 
#                         Compact and easier to read than traditional loops
#                         [Expression for value in iterable if condition]


doubles = []
for x in range(1,11):
   doubles.append(x*2)
 
print(doubles)

# OR

doubles = [ y * 2 for y in range(1,11)]
print(doubles)


fruits = ["Apple" , "Orange","Banana"]

fruits = [fruit.upper() for fruit in fruits]
print(fruits)

numbers = [1,-2,3,-4,5,-6]

positive_nums  =[ num for num in numbers if num>= 0]
print(positive_nums)