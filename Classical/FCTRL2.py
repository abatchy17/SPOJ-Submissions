import sys
from math import factorial

size = int(raw_input())

for i in range(0, size):
	x = int(raw_input())
	y = factorial(x)
	print y