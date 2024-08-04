#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    
    int len = strlen(str);
    int alphabet,digits,sc=0;
    for(int i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z'){
           
            alphabet++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            digits++;
        }
        else{
            sc++;
        }
    }
    
    printf("alphabet: %d digits: %d special characters: %d",alphabet,digits,sc);
}