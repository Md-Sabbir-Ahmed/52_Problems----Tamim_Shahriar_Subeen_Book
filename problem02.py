T=int(input())

while(T!=0):
    if T==100:
        break
    a=input()
    b=len(a)
    if b>100:
        break
    c=int(a)
    if c%2==0:
        print("even")
    else:
        print("odd")
    T=T-1
