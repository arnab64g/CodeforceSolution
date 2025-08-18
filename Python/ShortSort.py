n = int(input())

for i in range(n):
    values = input()
    a = list(values)
    
    if a[0] == 'a' or a[1] == 'b' or a[2] == 'c':
        print('Yes')
    else:
        print('No')