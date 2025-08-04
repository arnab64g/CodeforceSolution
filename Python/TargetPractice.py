t = int(input())

for k in range(t):
    total = 0
    for i in range(10):
        str = input()
        a = list(str)

        for j in range(10):
            if a[j] == 'X':
                if j == 0 or j == 9 or i == 0 or i == 9:
                    total += 1
                elif j == 1 or j == 8 or i == 1 or i == 8:
                    total += 2
                elif j == 2 or i == 2 or j == 7 or i == 7:
                    total += 3
                elif j == 3 or i == 3 or j == 6 or i == 6:
                    total += 4
                else:
                    total += 5
    
    print(total)