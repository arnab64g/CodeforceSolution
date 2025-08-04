n = int(input())

for i in range(n):
    str = input()
    a = list(str)
    count = 0

    for i in range(5):
        if a[i] == 'A':
            count += 1
    
    if count > 2:
        print('A')
    else:
        print('B')
