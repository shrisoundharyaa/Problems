num = int(input())
b = 1.0
sums =0
for i in range(1,num + 1):
    a = 1.0/b
    sums += a
    b = b*2
print(f"{sums:.2f}")
        