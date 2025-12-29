import datetime

date = datetime.date(2025,1,12)
today = datetime.date.today()

time = datetime.time(12,30,0)
timenow = datetime.datetime.now()
timenow = timenow.strftime("%H:%M:%S  %m %d %Y")
print(today)
print(time)
print(date)
print(timenow)

target_datetime = datetime.datetime(2010,1,12,3,30,10)
current_datetime = datetime.datetime.now()
if target_datetime < current_datetime:
   print("Target date has passed")
else :
   print("Target date has NOT Passed")