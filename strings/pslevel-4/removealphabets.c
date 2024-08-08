#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
   int len = strlen(str);
   int result[100];
   for(int i=0;i<len;i++){
      if(!isalpha(str[i])){
          printf("%c",str[i]);
      }
     
  }
    
}