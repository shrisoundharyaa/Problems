#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char *tok = strtok(str," ,.");
    char *small = tok;
    
     while(tok != NULL){
         if(strlen(tok) < strlen(small)){
             small = tok;
         }
         tok = strtok(NULL," ,.");
     }
     printf("%s",small);
    
}