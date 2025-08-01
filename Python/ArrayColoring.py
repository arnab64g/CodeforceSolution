t = int(input())

for i in range(t):
    n = int(input())
    values = input().split(' ')
    sum = 0
    
    for i in range(len(values)):
        sum += int(values[i])
    
    if sum % 2 == 0:
        print('YES')
    else:
        print('NO')