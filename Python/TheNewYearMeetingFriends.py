a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

d = [a, b, c]
d.sort()
dis = d[2] - d[1]+ d[1] - d[0]

print(dis)