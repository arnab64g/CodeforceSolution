t = int(input())

for i in range(t):
    str = input().split(' ')

    n = int(str[0])
    a = int(str[1])
    b = int(str[2])
    
    total = 0

    if a * 2 <= b:
        total = a * n
    else:
        total = b * (n//2)
        
        if n % 2 == 1:
            total += a

    print(total)