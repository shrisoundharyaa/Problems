#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int reverse=0;
    while(temp>0){
        int rem = temp%10;
        reverse = (reverse*10) + rem;
        temp = temp/10;
    }
    printf("%d",reverse);
}