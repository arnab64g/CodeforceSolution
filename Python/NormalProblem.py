t = int(input())

for i in range(t):
    str = input()
    str = reversed(str)
    a = list(str)
    l = a.__len__()
    s = []
    
    for j in range(0, l):
        if a[j] == 'p':
            s.append('q')
        elif a[j] =='q':
            s.append('p')
        else:
            s.append('w')
    
    print(''.join(s))
