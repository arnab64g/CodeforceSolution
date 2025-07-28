n = int(input())

for i in range(n):
    values = input().split(' ')
    if int(values[0]) + int(values[1]) >= 10:
        print('YES')
    elif int(values[0]) + int(values[2]) >= 10:
        print('YES')
    elif int(values[2]) + int(values[1]) >= 10:
        print('YES')
    else:
        print('NO')