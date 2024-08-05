#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char *word[100];
    char *tok = strtok(str," ");
    
    int count =0;
    while(tok != NULL){
        word[count] = tok;
        count++;
        tok = strtok(NULL," ");
        
    }
    
    for(int i=0,j= count - 1;i<j;i++,j--){
        char *temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
     for(int i=0;i<count;i++){
         printf("%s",word[i]);
         if(i < count -1){
             printf(" ");
         }
     }
}
    
