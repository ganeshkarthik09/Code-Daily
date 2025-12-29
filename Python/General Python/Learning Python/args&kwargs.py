# *args = allows you  to pass multiple non key arguments
# **kwargs = Allow you to pass multiple keyword arguments
#                *unpacking operator
#                1. Positional 2. Default 3. Keyword 4. Arbitrary


def add(*args) :  # we can change the name of the parameters
   print(type(args))
   total = 0
   for arg in args :
     total += arg
   return total

print(add(1,2,3,4,5))


#----------- ** kwargs -------

def print_address (**kwargs) :
   print(type(kwargs))
   for value,key in kwargs.items() : # item method gives key value pair
      print(f"{value} : {key}")


print_address(street = "Gully",city = "Narayankhed",state = "Telangana",pin ="502286")
def shipping_label(*args,**kwargs) :
   for arg in args :
      print(arg,end =" ")
   print()
   print(f"{kwargs.get('street')}")
   print(f"{kwargs.get('city')}{kwargs.get('state')}")
  


shipping_label ("Dr.", "Pranav","Undirkalle","Junior",
               street = "Gully ",
               apt = '50 ',
               city = "AhmedPoor ",
               state = "MH "
               )