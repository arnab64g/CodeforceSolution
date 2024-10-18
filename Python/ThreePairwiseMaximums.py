n = int(input())
for i in range(n):
    x , y, z = input().split()
    x = int(x)
    y = int(y)
    z = int(z)
    res = True
    a, b, c = 0, 0, 0
    if x == y == z:
        a, b, c = x, y, z
    elif x == y:
        a = x
        if z > a:
            res = False
        else:
            b = z
            if b == 1:
                c = b
            else:
                 c = b - 1
    elif y == z:
        c = y
        if x > c:
            res = False
        else:
            a = x
            if a == 1:
                b = 1
            else:
                b = a - 1
    elif x == z:
        b = x
        if y > b:
            res = False
        else:
            c = y
            if c == 1:
                a = 1
            else:
                a = c - 1
    elif x != y != z != x:
        res = False
    if res:
        print("YES")
        print(a, b, c)
    else:
         print("NO")