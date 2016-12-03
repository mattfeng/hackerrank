#!/bin/python

import sys

n = int(raw_input().strip())
a = []
for a_i in xrange(n):
    a_temp = map(int, raw_input().strip().split(' '))
    a.append(a_temp)

def primary_diag(matrix, n):
	ret = []
	for i in xrange(n):
		ret.append(matrix[i][i])
	return ret

def secondary_diag(matrix, n):
	ret = []
	for i in xrange(n):
		ret.append(matrix[i][n - i - 1])
	return ret

print abs(sum(primary_diag(a, n)) - sum(secondary_diag(a, n)))