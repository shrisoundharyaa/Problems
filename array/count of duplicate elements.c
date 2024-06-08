#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int count=0;
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
       
        for(int j=i + 1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    printf("%d is count of duplicate element",count);
}