#include<stdio.h>
int its_prime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int sum_of_prime(int start,int end){
    int sum =0;
    for(int i= start;i<=end;i++){
        if(its_prime(i)){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int start ,end;
    scanf("%d %d",&start,&end);
    int sum = sum_of_prime(start,end);
    printf("%d",sum);
    
}