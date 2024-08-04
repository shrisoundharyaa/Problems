//lower to upper viceversa
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    int len = strlen(str);
    
    for(int i=0;i<len;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A'&&str[i]<='Z'){
            str[i] = str[i] + 32;
        }
    }
    
    printf("%s",str);
}