#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    char str[n][100];
    for(int i=0;i<n;i++){
        fgets(str[i],100,stdin);
        str[i][strcspn(str[i],"\n")] = 0;
        }
    for(int i=0;i<n;i+= 2){
        printf("%s\n",str[i]);
    }
        
    
}