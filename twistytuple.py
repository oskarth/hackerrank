
# Pattern from someone else
# h = [int(x) for x in raw_input().split()]

n = input()
aline = raw_input()
a = []
res = 0
for i in aline.split(): a.append(int(i))

for i in range(n):
    for j in xrange(i+1, n):
        if a[j] > a[i]:
            for k in xrange(j+1, n):
                if a[k] < a[i]:
                    res = res+1

# res.append([a[i], a[j], a[k]])

print res


# h is the array
for i in xrange(n-2):
    j = n-2
    nsmall = 0
    while j>i:
        if h[j+1] < h[i]:
            nsmall += 1
        if h[j] > h[i]:
            total += nsmall
        j -= 1
print total
