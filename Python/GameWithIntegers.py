n = int(input())

for i in range(n):
    value = int(input())
    
    if value % 3 == 0:
        print('Second')
    else: 
        print('First')