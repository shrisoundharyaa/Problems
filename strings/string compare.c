#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    char str2[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    
    // int value= strcmp(str,str2);
    int flag=0;
    for(int i=0;str[i] != '\0' || str2[i] !='\0';i++){
        if(str[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("string are same");
    }
    else{
        printf("strings are not same");
    }
}