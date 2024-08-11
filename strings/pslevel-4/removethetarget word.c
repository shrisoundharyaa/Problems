#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char tar[100];
    scanf("%s",tar);
    int len = strlen(str);
    char *word[100];
    int n=0;
    char *tok = strtok(str," ,.");
    while(tok != NULL){
        word[n++] = tok;
        tok = strtok(NULL," ,.");
    }
    for(int i=0;i<n;i++){
        if(strcmp(word[i],tar)==0){
            
        }
        else{
            printf("%s ",word[i]);
        }
    }
}