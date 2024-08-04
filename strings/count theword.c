#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    
    char *token = strtok(str," ,.");
    int count=0;
    while(token != NULL){
        count++;
        
        token = strtok(NULL," ,.");
    }
    printf("%d",count);
    
}
