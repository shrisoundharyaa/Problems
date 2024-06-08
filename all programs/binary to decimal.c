//binary to decimal
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int dec=0;
    int i=0;
    while(n>0){
        int rem =n%10;
        dec += rem *pow(2,i);
        n=n/10;
        i++;
   
        
    }
    printf("%d",dec);
}