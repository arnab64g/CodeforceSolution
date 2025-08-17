t = int(input())

for i in range(t):
    cA = 0
    cB = 0
    cC = 0
    for j in range(3):
        str = input()
        a = list(str)
        for k in range(3):
            if a[k] == 'A':
                cA += 1
            elif a[k] == 'B':
                cB += 1
            else:
                cC += 1
    if cA < 3:
        print('A')
    elif cB < 3:
        print('B')
    else:
        print('C')