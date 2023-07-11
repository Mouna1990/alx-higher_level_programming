#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number > 0:
    print(int(number), "is positive")
elif number == 0:
    print(int(number), "is zero")
else:
    print(int(number), "is negative")
