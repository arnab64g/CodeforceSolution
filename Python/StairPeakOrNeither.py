n = int(input())

for i in range(n):
    values = input().split(' ')
    
    if int(values[1]) > int(values[0]) and int(values[1]) > int(values[2]):
        print('PEAK')
    elif int(values[2]) > int(values[1]) and int(values[1]) > int(values[0]):
        print('STAIR')
    else:
        print('NONE')