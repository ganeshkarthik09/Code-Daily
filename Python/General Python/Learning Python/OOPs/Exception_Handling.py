"""
Exception ---> An event interrupts the flow of a program 
               (Zero Division, Type Error, Value error)
               1.Try 2.except 3. Finally
"""
try :
   number = int(input("Enter a number"))
   print(1/number)
except ZeroDivisionError:
   print("You cant divide by zero IDIOT!")
except ValueError:
   print("Enter only numbers please")
except Exception:
   print("Something went wrong")
finally:
   print("Do some cleanup here")