#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char tempstr[100];
    strcpy(tempstr,str);
    char *tok = strtok(tempstr," ,.");
    char tar[100];
    scanf("%s",tar);
    int index =0;
    int lastindex = -1;
    //finding a lastindex of occurence
    while(tok != NULL){
        if(strcmp(tok,tar)==0){
            lastindex = index;
            
        }
        index++;
        tok = strtok(NULL," ,.");
    }
    //retokanize
    index =0;
    strcpy(tempstr,str);
    tok = strtok(tempstr," ,.");
    char result[100] ="";
    //remove last occurence
    while(tok != NULL){
        if(index != lastindex){
            strcat(result,tok);
            strcat(result," ");
        }
        index++;
        tok = strtok(NULL," ,.");
    }
    //for tailing space
    if(strlen(result)>0){
        result[strlen(result) - 1] = '\0';
    }

    printf("%s",result);
    
    
    }