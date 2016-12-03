#!/bin/python

import sys

n = int(raw_input().strip())
arr = map(int, raw_input().strip().split(' '))

positive = 0
negative = 0
zero = 0

for v in arr:
	if v > 0:
		positive += 1
	elif v < 0:
		negative += 1
	else:
		zero += 1

print '%.6f' % (positive / float(n))
print '%.6f' % (negative / float(n))
print '%.6f' % (zero / float(n))