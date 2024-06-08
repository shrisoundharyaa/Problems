#include<stdio.h>
int sumofdigit(int num){
    int sum = 0;
    while(num>0){
        int rem = num%10;
        sum = sum+rem;
        num=num/10;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int sum = sumofdigit(num);
    while(sum>=10){
        sum = sumofdigit(sum);
    }
   
        printf("%d",sum);
    
}
