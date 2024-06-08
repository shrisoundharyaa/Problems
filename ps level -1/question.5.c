// Given a number (N) if N is
// even then display the square of even numbers from 0 to N. If N is odd then display the square of
// odd numbers from 1 to N.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int num;
    if(n%2==0){
        for(int i=0;i<=n; i += 2){
            num =i*i;
             printf("%d ",num);
            
        }
       
    }
    else{
        for(int i=1;i<=n;i+=2){
             num = i * i;
              printf("%d ",num);
        }
       
    }
}