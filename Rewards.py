c = input().split(' ')
m = input().split(' ')
n = int(input())

a1 = int(c[0])
a2 = int(c[1])
a3 = int(c[2])
b1 = int(m[0])
b2 = int(m[1])
b3 = int(m[2])
s = (a1+a2+a3)/5
s = int(s)
if (a1+a2+a3) % 5 != 0:
    s += 1
s += (b1+b2+b3)/10
s = int(s)
if (b1+b2+b3) % 10 != 0:
    s += 1
if s <= n:
    print("YES")
else: 
    print("NO")