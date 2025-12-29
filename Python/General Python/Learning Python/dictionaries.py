# dictionary ---> A collection of {key : Value} pairs ordered and changeable . No duplicates
capitals = {"USA" : "DC",
            "INDIA" : "Delhi",
            "China" : "Beijing",
            "Russia" : "Moscow"}
print(capitals.get("USA")) # Return none if not found

if capitals.get("China") :
   print("That capital exists")
else :
   print("Capital doesn't exist ")


capitals.update({"Germany" : "Berlin"}) # With this we can add new key value pair or update a pair
capitals.update({"USA" : "New York"})
capitals.pop("China") # Removes and popitem() will remove latest addition to the dictionary
#.clear clears the dictionary
print(capitals)
keys = capitals.keys()
print(keys)

items =  capitals.items()
print(items)
for key,value in capitals.items():
   print(f"{key} : {value} ")