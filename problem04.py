t = int(input())
glue=' '
for i in range(0,t):
    n = int(input())
    arr = []
    for j in range(1,n+1):
        if n % j == 0:
            arr.append(j)
    arr = glue.join(str(m) for m in arr)
    print('Case {}: {}'.format(i+1,arr))
