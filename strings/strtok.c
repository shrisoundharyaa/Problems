#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
   fgets(str,sizeof(str),stdin);
   str[strcspn(str,"\n")] = 0;
  
   char *tok =  strtok(str," ,.");
    char *word[100];
    int count =0;
    
   while(tok != NULL){
     word[count++] = tok;
      tok = strtok(NULL," ,.");
   }
 
//   printf("%d",count);
  
  for(int j=0;j<count;j++){
      printf("%s\n",word[j]);
  }
    
}