import math

A, B, V = map(int, input().split())
required_days = (V - B) / (A - B)
print(math.ceil(required_days))
