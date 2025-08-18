t = int(input())

for i in range(t):
    str = input().split(' ')
    
    a = int(str[0])
    b = int(str[1])
    c = int(str[2])

    for j in range(5):
        if a <= b and a <= c:
            a += 1
        elif b <= a and b <= c:
            b += 1
        elif c <= a and c <= b:
            c += 1
    
    print(a * b * c)    