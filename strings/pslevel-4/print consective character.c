#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    int count;
    for(int i=0;i<len;i++){
           count = 1;
         while(i < len - 1 && str[i] == str[i + 1]){
             count++;
             i++;
         }
         if(count > 1){
             printf("%c=>%d\n",str[i],count);
         }
    }
}