t = input()

def summul(n):
    lst = []
    for k in range(1,n):
        if (k % 3) == 0:  lst.append(k)
        if (k % 5) == 0:  lst.append(k)
        if (k % 15) == 0: lst.remove(k)
    print sum(lst)

for i in range(t):
    summul(input())
