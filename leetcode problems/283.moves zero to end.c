//with using another array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[100];
    int index =0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0 ){
            arr2[index] = arr[i];
            index ++;
        }
        
    }
    for(int i = index;i<n;i++){
        arr2[i] = 0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    
}
//without using  another array

