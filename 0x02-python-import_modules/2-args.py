#!/usr/bin/python3
from sys import argv

num_arguments = len(argv) - 1

print("{} argument{}:".format(num_arguments, "s" if num_arguments != 1 else ""))

if num_arguments == 0:
    print("0 arguments.")
else:
    for i in range(1, len(argv)):
        print("{}: {}".format(i, argv[i]))
