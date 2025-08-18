n = int(input())
h = 0
base = 0
tq = 0

while True:
    h += 1
    base = base+h
    tq += base

    if tq > n:
         break

if tq > n:
    h -= 1

print(h)