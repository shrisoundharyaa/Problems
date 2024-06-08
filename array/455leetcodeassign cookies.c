#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a -  *(int*)b);
}
int main(){
    int n;
    scanf("%d",&n);
    int g[100];
    for(int i=0;i<n;i++){
        scanf("%d",&g[i]);
    }
    int m;
    scanf("%d",&m);
    int s[100];
    for(int i=0;i<m;i++){
        scanf("%d",&s[i]);
    }
    qsort(g,n,sizeof(int),compare);
    qsort(s,m,sizeof(int),compare);
int i=0 ,j=0,contentchildren=0;
    while(i<n && j<m){
        if(s[j]>=g[i]){
            contentchildren++;
            i++;
        }
        j++;
    }
    printf("%d",contentchildren);
}