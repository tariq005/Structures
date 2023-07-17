n = int(input())
l, r = 0, n-1
a = list(range(1, n+1))
x = int(input())

while l < r:
    m = (l+r)//2
    y = a[m]

    if y<x:
        l = m+1
    elif y>x:
        r = m
    else:
        print(m)
        break
else:
    print(-1)
