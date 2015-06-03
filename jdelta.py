first_line = raw_input()
second_line = raw_input()

n = int(first_line.split()[0])
d = int(first_line.split()[1])
numbers = []

for x in second_line.split():
    numbers.append(int(x))

def pairs_delta(numbers, delta):
    table = {}
    pairs = 0

    for n in numbers:
        if (n - delta) in table:
            pairs += 1
        if (n + delta) in table:
            pairs += 1
            
        table[n] = 0

    return pairs

print pairs_delta(numbers, d)
        



