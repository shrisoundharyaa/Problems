#include<stdio.h>
int its_prime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(its_prime(n)){
        printf("it is a prime number");
    }
    else{
        printf("it is a composite number");
    }
}