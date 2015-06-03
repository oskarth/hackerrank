t = input()

for n in range(1,t+1):
    if (n % 15 == 0):
        print "BooHoo"
    elif (n % 3 == 0):
        print "Boo"
    elif (n % 5 == 0):
        print "Hoo"
    else:
        print n
