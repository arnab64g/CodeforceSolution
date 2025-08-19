t = int(input())

for i in range(t):
    str = input().split()
    value = 0

    for j in range(0, 3):
        for k in range(1, 3):
            if abs(int(str[j]) - int(str[k])) > value:
                value = abs(int(str[j]) - int(str[k]))
    
    print(value)