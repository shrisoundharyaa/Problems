#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    char tar[100];
    scanf("%s" , &tar);
    char *tok = strtok(str," ,.");
    int found = 0;
    int index=0;
    while(tok !=NULL){
       if(strcmp(tok,tar)== 0){
           printf("%d",index);
           found = 1;
           break;
       }
        tok = strtok(NULL," ,.");
        index++;
    }
    if(!found){
        printf("thw wont don't exists");
    }
    
    
}