#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int x=0,y=1,z;
    if(x%2==0){
        printf("%d ",x);
    }
    if(y%2==0){
        printf("%d ",y);
    }
    num = num - 2;
    while(num>0){
    z=x+y;
    if(z%2==0){
        printf("%d ",z);
       
    }
    
    x=y;
    y=z;
    num --;
    }
    
}