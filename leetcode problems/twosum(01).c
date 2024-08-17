#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[100];
    for(int i = 0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int tar;
    scanf("%d",&tar);
    int result[100];
    int k;
    for(int i=0;i<n;i++){
        for(int j=i + 1;j<n;j++){
            if(s[i] + s[j] == tar){
            result[k++] = i;
            result[k++] = j;
            }
            
        }
    }
    for(int i=0;i<k;i++){
        printf("%d ",result[i]);
    }
}
