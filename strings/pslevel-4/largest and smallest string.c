#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    
    char *tok = strtok(str," ,.");
    char *small = tok;
    char *large = tok;
    while(tok != NULL){
        if(strlen(tok)<strlen(small)){
            small = tok;
        }
        if(strlen(tok)>strlen(large)){
            large = tok;
        }
        tok = strtok(NULL," ,.");
    }
    
    
    printf("%s\n",small);
    printf("%s\n",large);
}