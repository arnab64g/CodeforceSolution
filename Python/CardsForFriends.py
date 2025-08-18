n = int(input())

for i in range(n):
    h, w, n = input().split()
    h = int(h)
    w = int(w)
    n = int(n)
    a, b = 1, 1

    while w%2 == 0:
        a *= 2
        w /=2
    
    while h%2 == 0:
        b *= 2
        h /=2
    
    total= a*b
    
    if total >= n:
        print("YES")
    else:
        print ("NO")