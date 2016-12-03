#!/bin/python

import sys

a0,a1,a2 = raw_input().strip().split(' ')
a0,a1,a2 = [int(a0),int(a1),int(a2)]
b0,b1,b2 = raw_input().strip().split(' ')
b0,b1,b2 = [int(b0),int(b1),int(b2)]

def points(a, b):
	if a > b:
		return 1, 0
	elif b > a:
		return 0, 1
	else:
		return 0, 0

alice, bob = (sum(x) for x in zip(points(a0, b0), points(a1, b1), points(a2, b2)))

print alice, bob