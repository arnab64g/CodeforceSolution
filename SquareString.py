n = int(input())
for i in range(n):
    s = input()
    l = len(s)
    if(l%2 == 1):
        print("NO")
    else:
        m =  int(l/2)
        r = 1
        for j in range(m):
            if(s[j] != s[j+m]):
                r = 0
                break
        if(r == 1):
            print("YES")
        else:
            print("NO");
