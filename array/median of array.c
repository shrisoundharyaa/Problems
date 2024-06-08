#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j= i + 1;j<n;j++){
            if(arr[i]>arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    int med;
    if(n%2==0){
        med = (arr[n/2 - 1] + arr[n/2])/2;
    }
    else{
        med = arr[n/2];
    }
    printf("%d",med);
}