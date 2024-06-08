#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    int k;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        temp = a[n - 1];
        for( j=n - 1;j>=1;j--){
            a[j]=a[j - 1];
        }
        a[j] = temp;
    }
    //print the element 
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}