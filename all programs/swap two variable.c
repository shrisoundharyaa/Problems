#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}
// it is not a efficient method 
//using a thrid variavle is a efficient method