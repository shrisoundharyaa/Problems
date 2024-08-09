#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int freq[256]={0};
    int len = strlen(str);
    for(int i=0;i<len;i++){
        freq[(int)str[i]]++;
    }
    int i;
    int min =len;
    char min_rep ='\0';
    for(i=0;i<len;i++){
        if(freq[(int)str[i]]> 1 && freq[(int)str[i]] <min){
            min =  freq[(int)str[i]];
            min_rep = str[i];
        }
    }
    if(min_rep != '\0'){
        printf("%c",min_rep);
    }
    
}