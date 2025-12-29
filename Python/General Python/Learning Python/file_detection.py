# Basic File Detection

import os

file_path = "OOPs/test.txt"#We can use absolute file path but use \\ or /

if os.path.exists(file_path):
   print(f"The location {file_path} exists")
   if os.path.isfile(file_path):
      print("That is a file ")
   elif os.path.isdir(file_path):
      print("That is a directory")
else:
   print("The location does not exists")
