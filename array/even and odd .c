#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+ 1;j<n;j++){
            if(arr[i]>arr[j]){
                int a = arr[i];
                arr[i]=arr[j];
                arr[j] = a;
        }
    }
    }
    //even number 
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    //odd number
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }
}//in ascending order 
// for decensdinf change the condition
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+ 1;j<n;j++){
            if(arr[i]<arr[j]){
                int a = arr[i];
                arr[i]=arr[j];
                arr[j] = a;                      // arr[i]<arr[j]
        }
    }
    }
    //even number 
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    //odd number
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            printf("%d ",arr[i]);
        }
    }
}