import math
import sys

while True:
    s = input()

    if s == '0':
        sys.exit()

    medium_length = len(s) / 2
    front_half = s[:math.floor(medium_length)]
    back_half = s[math.ceil(medium_length):]
    reversed_back_half = back_half[::-1]

    if front_half == reversed_back_half:
        print("yes")
    else:
        print("no")
