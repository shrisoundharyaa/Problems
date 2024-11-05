a=int(input())

sums = 0

for i in range(1,a):
    if a%i == 0:
        print(i,end=" ")
        sums +=  i
print()
print(sums)

if a == sums:
    print(f"{a} is an equal number")
else:
    print(f"{a} is not an equal number")