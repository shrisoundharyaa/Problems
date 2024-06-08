import math 
n1 =int(input())
n2 =int(input())
d1 =int(input())
d2 =int(input())
lcm = math.lcm(d1,d2)
num1 = lcm/d1
num2 = lcm/d2
new_num1 = n1*num1
new_num2 = n2*num2
ans = int(new_num1 + new_num2)
gcd = math.gcd(ans,lcm)
ans = int(ans/gcd)
lcm = int(lcm/gcd)

if ans == lcm:
     print(ans)
else:
     print(ans,"/",gcd)
   

