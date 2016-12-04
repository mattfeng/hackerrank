#!/bin/python

import sys
import datetime

time = raw_input().strip()
raw_time = datetime.datetime.strptime(time, '%I:%M:%S%p')
print datetime.datetime.strftime(raw_time, '%H:%M:%S')