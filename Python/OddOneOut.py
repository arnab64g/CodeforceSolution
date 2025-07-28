n = int(input())

for i in range(n):
    value = input().split(' ')

    if int(value[0]) == int(value[1]):
        print(value[2])
    elif int(value[0]) == int(value[2]):
        print(value[1])
    elif int(value[1]) == int(value[2]):
        print(value[0])