a= int(input())

def isprime(a):
    if(a<=1):
        return 0
    else:
        for i in range(2,a//2 + 1 ):
            if(a%i==0):
                return 0
    return 1

count = 0
nxt_ele = a + 1
while count<5:
    if(isprime(nxt_ele)):
        print(nxt_ele)
        count += 1
    nxt_ele += 1