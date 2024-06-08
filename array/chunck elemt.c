#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int chunk;
    scanf("%d",&chunk);
    int chunksize = n/chunk;
    int count =0;
    for(int i=0;i<n;i += chunk){
        if(count<chunksize){
            printf("[");
            for(int j=i;j<chunk + i;j++){
                printf("%d,",arr[j]);
            }
            printf("\b");
            printf("]");
            count++;
        }
    }
}
