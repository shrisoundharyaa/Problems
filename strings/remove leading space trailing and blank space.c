#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int i =0;
    while(str[i] ==' '){
        i++;
    }
    char out[100];
    strcpy(out,&str[i]);
    int len = strlen(str);
    int j =0;
    while(len > i){
        if(!isspace(str[i])){
            out[j++] = str[i++];
        }
        else{
            out[j++] =' ';
            while(str[i]==' '){
                i++;
            }
        }
    }
    
    if(j> 0 && out[j - 1] == ' ' ){
        out[--j];
    }
     printf("\"%s\"\n", out);
}