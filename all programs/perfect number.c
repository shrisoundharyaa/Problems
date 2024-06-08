#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
          sum = sum +i;
        }
    }
    if(sum==num){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    
}
//similar to abundant / deficient number 
//for abundant = sum>num  and for deficient sum < num