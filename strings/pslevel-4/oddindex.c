#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int reverse(char *start,char *end){
    while(start<=end){
    int temp = *start;
    *start = * end;
    *end = temp;
    start++;
    end--;
        
    }
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char *tok = strtok(str," ,.");
    int len = strlen(str);
    char *word[100];
    int count =0;
    
    while(tok != NULL){
        word[count] = tok;
        reverse(word[count],word[count] + strlen(tok) - 1);
        count++;
        tok = strtok(NULL," ,.");
    }
    for(int i=1;i<count;i+=2){
        
            printf("%s ",word[i]);
        }
        
}
