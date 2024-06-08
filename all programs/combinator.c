#include<stdio.h>
int ncr(int n, int r){
    if(n==1 || r == n){
        return 1;
    }
    else{
        int nume = 1;
        int demo = 1;
        for(int i=0;i<r;i++){
            nume *=(n - i);
            demo *=(i + 1);
        }
        return nume/demo;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int handshake = ncr(n,2);
    printf("%d",handshake);
}