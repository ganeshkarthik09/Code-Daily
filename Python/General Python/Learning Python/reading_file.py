# Reading a file (.txt,.json,.csv)

file_path = "OOPs/test.txt"
try:
   with open(file_path,"r") as file:
      content = file.read()
      print(content)
except FileNotFoundError:
   print("That file was not found")


# Json file 
import json
file_path = "output.json"
try:
   with open(file_path,"r") as file:
      content = json.load(file)
      print(content)
except FileNotFoundError:
   print("That file was not found")
