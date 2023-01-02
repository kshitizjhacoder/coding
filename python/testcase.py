import sys
import random

nl, nr = map(int, sys.argv[1: 3])
file_lb, file_rb = map(int, sys.argv[3: 5])
# flag = int(sys.argv[7])

for i in range(file_lb, file_rb + 1):
    file_name = "input%02d.txt" % i
    with open(file_name, 'w') as f:
        inarr = []
        n = random.randint(nl, nr)
        f.write(str(n) + '\n')
        for j in range(n):
            x = random.randint(nl, nr)
            f.write(str(x) + ' ')
