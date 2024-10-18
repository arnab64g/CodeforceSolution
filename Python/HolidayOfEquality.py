n = int(input())
mx = 0
sum =0
lst = input().split()
for i in range(n):
    lst[i] = int(lst[i])
    if lst[i] > mx:
        mx = lst[i]
for i in range(n):
    sum += mx - lst[i]
print(sum)