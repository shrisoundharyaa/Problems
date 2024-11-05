a = int(input())

if(a>0):
    x=0
    y=1
    print(x,end=" ")
    print(y,end=" ")
    a = a - 2
    while(a>0):
        z = x + y
        x = y
        y = z
        print(z,end=" ")
        a -= 1
else:
    print("invalid number")