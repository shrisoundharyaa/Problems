a= int(input())
num = int(input())

def isprime(n):
    if n<=1:
        return 0
    else:
        for i in range(2,n//2):
            if n%i==0:
                return 0
    return 1
    
count = 0
while count < a:
    if isprime(num):
         print(num, end=", " if count < a - 1 else "\n")#remove tailing comma
         count += 1
    num += 1

        