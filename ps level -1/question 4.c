#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%2==0 && b%2==0){
       int  num = a + 2;
        printf("%d and %d is even number and the next even number is %d",a,b,num);
    }
    else{
        printf("%d and %d is not a even number",a,b);
    }
}
//  Given two numbers, (14, 60) if both are even then display the second even number (16) , if
// both are not even (25 67) then display as 25 and 67 are not even