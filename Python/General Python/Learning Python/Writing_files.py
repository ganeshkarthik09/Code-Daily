#writing files in Python(.txt,.jason,.csv)
employees = ["Deepak", "Jatin","Aryan","Pranav"]
txt_data = " I like Games"
file_path = "output.txt" # It can be relative or absolute file path
try :
   with open(file_path,"w") as  file:
      for employee in employees :
        file.write(employee +"\n")
      print(f"Text file {file_path} was created")
except FileExistsError:
   print("That file already exists")




#json file
import json
Employee = {
   "name" : "Raman",
   "age"  : 30,
   "Job" : "AI"
}
file_path = "output.json"

try :
   with open(file_path,"w") as  file:
      json.dump(Employee,file)
      for employee in Employee :
         file.write(employee +"\n")
      print(f"Json file {file_path} was created")
except FileExistsError:
   print("That Json file already exists")