#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int i=0;
    while(str[i] ==' '){
        i++;
    }
    char out[100];
    strcpy(out,&str[i]);
    
    int len = strlen(out);
    if(len>0 && out[len - 1]==' '){
        out[--len];
    }
    
    printf("%s",out);
    printf("%d",len);
    
}