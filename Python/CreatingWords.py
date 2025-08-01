n = int(input())

for i in range(n):
    value = input().split(' ')
    a = list(value[0])
    b = list(value[1])
    a[0], b[0] = b[0], a[0]
    x = ''.join(a)
    y = ''.join(b)
    print(x, end=' ')
    print(y)