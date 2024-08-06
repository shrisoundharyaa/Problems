#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char target;
    scanf("%c",&target);
    int index = -1;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] == target ){
            index = i;
         
        }
    }
   printf("%d",index);
}