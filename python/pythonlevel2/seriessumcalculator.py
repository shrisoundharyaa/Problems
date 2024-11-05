a = int(input())
b = int(input())
sums =0

c = a
for i in range(1,b + 1):
    print(a,end=" ")
    if i!=b:
        print("+",end=" ")
    sums += a
    a = a * 10 + c
print()
print(sums)