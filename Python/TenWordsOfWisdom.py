t = int(input())

for i in range(t):
    n = int(input())
    pos = -1
    max_value = 0

    for j in range(n):
        str = input().split(' ')
        a = int(str[0])
        b = int(str[1])
        if b > max_value and a <= 10:
            max_value = b
            pos = j + 1
    
    print(pos)