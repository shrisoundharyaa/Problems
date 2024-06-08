#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bin[32],i=0,j;
    while(n>0){
    bin[i] = n%2;
    n=n/2;
    i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",bin[j]);
    }
}