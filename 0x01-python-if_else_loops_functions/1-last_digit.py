#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
Last_digit = number % 10
print("Last digit of", number, "is", Last_digit, end=" ")
if Last_digit > 5:
    print("and is greater than 5")
elif Last_digit == 0:
    print("and is 0")
else:
    print("and is less than 6 and not 0")
