
#include<stdio.h>
int incrementdigit(int n){
    int total = 0;
    int multipiler = 1;
    while(n>0){
       int digit = n%10;
        digit = (digit + 1) %10;
        total = total + digit * multipiler;
        multipiler *= 10;
        n = n/10;
    }
    return total;
}
int main(){
    
        int num;
        scanf("%d",&num);
        int result = incrementdigit(num);
        printf("%d",result);
    
}