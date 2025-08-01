t = int(input())

for i in range(t):
    values = input().split(' ')
    n = int(values[0])
    k = int(values[1])
    a = input().split(' ')
    res = False
    
    for i in range(n):
        if k == int(a[i]):
            res = True
            break
    
    if res:
        print('YES')
    else:
        print('NO')