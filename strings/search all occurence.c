#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char tar[100];
    scanf("%s",&tar);
    char *tok = strtok(str," ,.");
    int index =0;
    int found = 0;
    
    while(tok != NULL){
        if( strcmp(tok,tar) == 0){
           printf("%d\n",index);
            found = 1;
            
        }
        
        tok = strtok(NULL," ,.");
        index++;
    }
    
    if(!found){
        printf("the word dosen't exists");
    }
   
}