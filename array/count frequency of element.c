#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b[100];
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        int count = 1;
        if(a[i]!= -1){
            for(int j=i + 1;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j] = -1;
                }
            }
            
            b[i] = count;
        }
    }
    
    for(int i=0;i<n;i++){
        if(a[i] != -1){
            printf("%d occurs %d times\n",a[i],b[i]);
        }
    }
}
//output 
// 1 occurs 2 times
// 2 occurs 4 times