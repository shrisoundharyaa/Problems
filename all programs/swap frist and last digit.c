#include<stdio.h>
#include<math.h>
int main(){
    int n;//1234
    scanf("%d",&n);
    int ld = n%10;//4
    n=n/10;//123
    int digit = (int)log10(n);//2
    int power = pow(10,digit);//100
    int fd = n/power;//1
    int mid  = n%power;//23
    int result = (ld*power + mid) * 10 + fd;
    printf("%d",result);
    
    
}