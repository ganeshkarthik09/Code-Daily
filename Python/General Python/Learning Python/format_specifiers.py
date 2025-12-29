# Format specifiers = {value:flags} format a value based on what flags are inserted

# .(number)f  ---> round to thst msny decimal places (fixed point)
# :(number) ---> allocate that many spaces
# :03  ---> Allocate and zero pad that many spaces
# :< ---> Left Justify
# :> ---> Right Justify 
# :^ ---> Center align
# :+ ---> Use a plus sign to indicate positive value
# := --->place sign to indicate positive value
# : ---> Insert a space before positive numbers
# :, ---> comma seperator
price1 = 3.14159
price2 = -987.65
price3 = 12.34
print(f"Price 1 is ${price1: 10}")
print(f"Price 2 is &{price2: 10}")
print(f"Price 3 is ${price3: 10}")
# Lot more are there