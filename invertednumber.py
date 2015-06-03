n = input()

def getInversedNumber(n):
    return ~n & (pow(2, n.bit_length()) - 1)

print getInversedNumber(n)
    
    
