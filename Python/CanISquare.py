import math

t = int(input())

for i in range(t):
    n = int(input())
    str = input().split(' ')
    total = 0

    for j in range(n):
        total += int(str[j])
    
    sq = math.sqrt(total)
    
    if int(math.pow(int(sq), 2)).__eq__(total):
        print('YES')
    else:
        print('NO')