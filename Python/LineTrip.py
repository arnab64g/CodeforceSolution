t = int(input())

for i in range(t):
    x, y = input().split(' ')
    a = input().split(' ')
    max_c = int(a[0])
    for j in range(1, int(x)):
        value = int(a[j]) - int(a[j-1])
        if value > max_c:
            max_c = value
    if 2 * (int(y) - int(a[int(x) - 1])) > max_c:
            max_c = 2 * (int(y) - int(a[int(x) - 1]))
    print(max_c)