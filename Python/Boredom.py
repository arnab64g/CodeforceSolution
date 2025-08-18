n = int(input())
s = input().split(' ')
a = [0]*100005
z = [0]*100005

for i in range(n):
    val = int(s[i])
    a[val] += 1

z[0] = 0
z[1] = a[1]

for i in range(2, 100001):
    z[i] = max(z[i-1], z[i-2]+i*a[i])

print(z[100000])

