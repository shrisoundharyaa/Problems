#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    char tar;
    scanf(" %c",&tar);
    char rep;
    scanf(" %c",&rep);
    int len = strlen(str);
    int lastdigit = -1;
    for(int i=0;i<len;i++){
        if(str[i] == tar){
            lastdigit = i;
        }
    }
    if(lastdigit > 0){
       str[lastdigit] = rep;
    }
    printf("%s",str);
}