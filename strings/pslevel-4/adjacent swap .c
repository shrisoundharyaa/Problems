#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    for(int i=0;i<len - 1;i+=2){
        char temp = str[i];
        str[i] = str[i + 1];
        str[i +1] = temp;
    }
    printf("%s",str);
}