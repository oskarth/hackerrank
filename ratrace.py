n = input()
sline = raw_input()
dline = raw_input()

speed = []
distance = []
res = {}

for i in sline.split(): speed.append(float(i))
for i in dline.split(): distance.append(float(i))

# Compile results
for i in range(n):
    res.update({i: (distance[i] / speed[i])})

# Find minimum
min = res[0]
for i in range(n):
    if res[i] < min:
        min = res[i]

# Print out winners
for i in range(n):
    if res[i] <= min:
        print i+1
