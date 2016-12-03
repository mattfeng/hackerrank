#!/bin/python

import sys

n = int(raw_input().strip())

for l in xrange(1, n + 1):
	print ' ' * (n - l) + '#' * l