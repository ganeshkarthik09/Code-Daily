# Indexing ---> Accesing elements of a sequence using [](indexing operator )
#                  [start : end : step ]
credit_card_num = "1234-5678-9101-1126"
print(credit_card_num[0])
#Starting index is inclusive and ending index is exclusive
print(credit_card_num[0:4])
print(credit_card_num[5:9])
print(credit_card_num[5:])#5 to end
print(credit_card_num[-1])# From last
print(credit_card_num[::3])
#Inderxing start from 0 in every built in data type in Python
last_digits = credit_card_num[-4:]
print(f"xxxx-xxxx-xxxx-{last_digits}")
credit_card_num = credit_card_num[::-1]# Reversing the string 
print(credit_card_num)