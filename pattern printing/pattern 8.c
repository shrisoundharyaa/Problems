#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=4;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
output
4321
432
43
2