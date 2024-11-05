a= int(input())

def isprime(a):
    if(a<=1):
        return 0
    else:
        for i in range(2,a//2 + 1 ):
            if(a%i==0):
                return 0
    return 1

if(isprime(a)):
    print("prime")
else:
    print("not a prime")