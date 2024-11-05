a = int(input())
sums =0

for i in range(1,a):
    if a%i == 0:
        sums += i
if(sums>a):
    print(f"{a} is an abundant number")
else:
    print(f"{a} is not an abuntdant number")