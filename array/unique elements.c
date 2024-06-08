#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int freq[100];
    int  arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    
    //findd duplicates
    for(int i=0;i<n;i++){
        int count=1;
        for(int j= i + 1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    
    //print the elements
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            printf("%d ",arr[i]);
        }
    }
    
}