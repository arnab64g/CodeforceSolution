n = int(input())
mk, crs = 0, 0

for i  in range(n):
    m, c = input().split()
    m = int(m)
    c = int(c)
    if m > c:
        mk += 1
    elif m < c:
        crs += 1

if mk > crs:
    print("Mishka")
elif crs > mk:
    print("Chris")
else: print("Friendship is magic!^^")