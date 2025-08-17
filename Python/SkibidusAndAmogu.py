t = int(input())

for i in range(t):
    str = input()
    a = list(str)
    a.pop()
    a.pop()
    a.append('i')
    print(''.join(a))