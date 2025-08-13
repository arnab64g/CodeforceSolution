t = int(input())

for i in range(t):
    n = int(input())
    s = n // 4
    if n % 4 == 2:
        s += 1
    print(s)