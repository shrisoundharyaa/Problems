#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }

    int value;
    scanf("%d",&value);
    int pos;
    scanf("%d",&pos);
    for(int i= n- 1;i>=pos- 1;i--){
        arr[i + 1]=arr[i];
    }
    
     arr[pos - 1] = value;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}