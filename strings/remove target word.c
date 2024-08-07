#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
     char *tok = strtok(str," ,.");
     char tar[100];
     scanf("%s",tar);
     char result[100] = "";
     int found = 0;
     while(tok !=NULL){
         if(strcmp(tok,tar)==0 && !found){
             found =1;
         }
         else{
             strcat(result,tok);
             strcat(result," ");
         }
         tok = strtok(NULL," ,.");
     }
     if(strlen(result)>0){
        result[strlen(result) - 1] ='\0';
     }
     printf("%s",result);
}