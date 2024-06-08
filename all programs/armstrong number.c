#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp = num;
    int count =0;
    int sum =0;
    while(temp>0){
        temp = temp/10;
        count++;
    }
    temp = num;
    while(temp>0){
       int rem = temp%10;
        sum = sum + pow(rem,count);
        temp = temp/10;
    }
    if(sum==num){
        printf("it is a amstrong number");
    }
    else{
        printf("it is not a armstrong number");
    }
}