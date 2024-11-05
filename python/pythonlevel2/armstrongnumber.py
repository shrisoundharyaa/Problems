import math
a=int(input())
temp = a
tot = 0
count = str(a)
cnt = len(count)
# while(temp>0):
#     count = count + 1
#     temp = temp/10
# temp = a
while(temp>0):
    rem = temp%10
    re = int(rem)
    tot = tot + pow(re,cnt)
    temp = temp/10
if(tot == a):
    print("armstrong")
else:
    print("not a armstrong")


# crt version
import math
a=int(input())
temp = a
tot = 0
count = 0
while(temp>0):
    count = count + 1
    temp = temp//10
temp = a
while(temp>0):
    rem = temp%10
    tot = tot + pow(rem,count)
    temp = temp//10
if(tot == a):
    print("armstrong")
else:
    print("not a armstrong")
print(count)