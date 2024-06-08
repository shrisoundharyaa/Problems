#include<stdio.h>
int its_prime(int num){
    if(num<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(its_prime(i)){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    }
    
    
}
// output 
// **
// ***
// *****     => prime number star