s = input().split(' ')
line = input()
a = [0]*4
for i in range(4):
    a[i] = int(s[i])
l = len(line) 
count = 0

for i in range(l):
    if line[i] == '1':
        strp = 0
    elif line[i] == '2':
        strp = 1
    elif line[i] == '3':
        strp = 2
    elif line[i] == '4':
        strp = 3
    count += a[strp]
print(count)