#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i= 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
      
    }
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d is a max number\n",max);
    printf("%d is a min number\n",min)
}