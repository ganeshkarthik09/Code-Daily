# variable scope ---> Where a variable is visible and accessible 
# scope resolution = (LEGB) Local -> Enclosed ->Global ->Built in
def func1():
   x = 1
   print(x)

   def func2():
    x = 2
    print(x)
    func2()

func1()