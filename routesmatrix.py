# Something something Carmichael (?) numbers? But with a twist.
# Dynamic programing
import sys

matrix = []

for line in sys.stdin:
    matrix.append(line.split())

def ways (matrix):
    if (len(matrix) == 0): return 0
    
    sub1 = []
    sub2 = []

    # going right
    if (len(matrix[0]) == 1):
        return 1
    else:
        for x in matrix:
            sub1.append(x[1:])

    if (len(matrix) == 1):
        return 1
    else:
        # going down
        sub2 = matrix[1:]

    
    if (int(sub2[0][0]) == 0) and (int(sub1[0][0]) == 0):
        return 0
    elif (int(sub1[0][0]) ==0):
        return ways(sub2)
    elif (int(sub2[0][0]) ==0):
        return ways(sub1)
    else:
        return ways(sub1) + ways(sub2)    

def numberOfRoutes(matrix):
    return ways(matrix)

res = numberOfRoutes(matrix)
print res
