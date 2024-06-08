#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int x=0,y=1,z;
   printf("%d %d ",x,y);
    num = num - 2;
    while(num>0){
    z=x+y;
    
        printf("%d ",z);
       
    x=y;
    y=z;
    num --;
    }
    
}
//using for loop to find even fabi 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=0,y=1;
    if(x%2==0){
        printf("%d ",x);
    }
    if(y%2==0){
        printf("%d ",y);
    }
    for(int i=0;i<n - 2;i++){
         int z = x + y;
         if(z%2==0){
         printf("%d ",z);
         }
         x = y;
         y = z;
    
}
}
