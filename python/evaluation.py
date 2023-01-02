import sys
import os

file_lb, file_rb = map(int, sys.argv[1: 3])
for i in range(file_lb, file_rb + 1):
    inputfile = "input%02d.txt" % i
    outputfile = "output%02d.txt" % i
    with open(outputfile, 'w') as f:
        os.system('.\sol <%s> %s' % (inputfile, outputfile))
