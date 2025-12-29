#match - case - statement (switch) : An alternative to using many elif statements 
#                                   Executes some code if a value matches a 'case'
#                                   Benifits : cleaner and syntax is more readable

def day_of_week(day) :
   if day == 1:
      return "It is Sunday"
   elif day == 2:
      return "It is monday" 
   elif day == 3:
      return "It is tuesday" 
   elif day == 4:
      return "It is wednesday" 
   elif day == 5:
      return "It is thursday" 
   elif day == 6:
      return "It is friday" 
   elif day == 7:
      return "It is saturday" 
   else :
      return "Not a valid Day"
   
print(day_of_week(5))


# or


def day_of_week1(day) :
   match day :
   
      case 1:
        return "It is Sunday"
      case 2:
        return "It is monday" 
      case 3:
        return "It is tuesday" 
      case 4:
        return "It is wednesday" 
      case 5:
        return "It is thursday" 
      case 6:
        return "It is friday" 
      case 7:
       return "It is saturday" 
      case _:
       return "Not a valid Day"
   
print(day_of_week1(1))
