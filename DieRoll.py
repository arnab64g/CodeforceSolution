n, t = input().split()
n =int(n)
t = int(t)
c = max(n, t)
c = 6 - c +1
if c%2 == 1:
    if c == 3:
        print('1/2')
    else:
        s = str(int(c))
        s += '/6'
        print(s)
else:
    if c == 4:
        print('2/3')
    else:
        c = 6/c
        s ='1/'
        s += str(int(c))
        print(s)