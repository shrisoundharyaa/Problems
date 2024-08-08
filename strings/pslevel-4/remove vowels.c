#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'){
            continue;
        }
        else{
            printf("%c",str[i]);
        }
    }
}