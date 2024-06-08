#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp =num;
    int sum =0;
    while(temp>0){
        int rem = temp%10;
        sum =sum +rem;
        temp = temp/10;
    }
    printf("%d",sum);
}