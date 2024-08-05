#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *start,char *end){
    while(start<end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char *word[100];
    char *tok = strtok(str," ");
    
    int count =0;
    while(tok != NULL){
        word[count] = tok;
        reverse(word[count],word[count] + strlen(tok) - 1);
         count++;
        tok = strtok(NULL," ");
        
    }
    
 
     for(int i=0;i<count;i++){
         printf("%s",word[i]);
         if(i < count -1){
             printf(" ");
         }
     }
    
}