def roman(a):
    arr =[1000,900,500,400,100,90,50,40,10,9,5,4,1]
    sym = ["M","CM","D","XD","C","XC","L","XL","X","IX","V","IV","I"]
     
    result =""
    for i in range(13):
        while a >= arr[i]:
            result += sym[i]
            a -=arr[i]
    return result



num = int(input())
print(roman(num))