# nested loop ---> A loop within another loop (outer,inner)
#            outer loop :
#                       inner loop :
for y in range (5) :
   for x in range(1,10) :
     print(x,end=" ")# on same line
   print()
#printing the rectangle
rows = int(input("Enter the number of rows :"))
columns = int (input("Enter the number of columns : "))
symbol = input("Enter a sumbol to use : ")
for i in range(rows) :
   for j in range(columns) :
      print(symbol,end = " ")
   print()
 