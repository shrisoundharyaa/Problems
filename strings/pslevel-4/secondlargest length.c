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
    fgets(str[i],sizeof(str[i]),stdin);
    str[i][strcspn(str[i],"\n")] = 0;
    }
    int max = 0;
    int secmax =0;
   
    for(int i=0;i<n;i++){
        if(strlen(str[i])>max){
           secmax = max;
           max = strlen(str[i]);
           
        }
        else if(strlen(str[i]) > secmax && strlen(str[i])< max){
            secmax = strlen(str[i]);
        }
    }
    printf("%d",secmax);
    
}