#!/usr/bin/python3
from sys import argv

arguments = argv[1:]

result = sum(int(arg) for arg in arguments)

print(result)
