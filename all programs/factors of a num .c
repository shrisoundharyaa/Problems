#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    printf("%d ",num);
}