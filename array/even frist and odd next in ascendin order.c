#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
   qsort(arr,n,sizeof(int),compare);
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }
    
}