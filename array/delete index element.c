#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    if(pos<0 || pos>n){
        printf("invalid input");
    }
   
   else{
    for(int i=pos - 1; i< n- 1;i++){
        arr[i] = arr[i+ 1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
   }
}