year = int(input())
year2 = year + 1
leap_count=0
nonleap_count=0
if year%400 == 0 or year%4 ==0 and year%100 != 0:
    print(f"{year} is a leap year")
    for i in range(year2 ,year2 + 10):
        
        if(i%400==0 or i%4==0 and i%100!= 0):
            leap_count +=1
        
        else:
             nonleap_count +=1
       
else:
    print(f"{year} is non leap year")
    for i in range(year2 , year2 + 10):
        if i%400==0 or i%4==0 and i%100 != 0:
            leap_count +=1
        else:
            nonleap_count +=1
print(f"leap count:{leap_count}")
print(f"nonleap_count:{nonleap_count}")
            