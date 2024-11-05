a = int(input())

if a > 0:
    x = 0
    y = 1
    
    while x <= a:
        if x % 2 == 0:
            print(x, end=" ")
        z = x + y
        x = y
        y = z
else:
    print("invalid number")