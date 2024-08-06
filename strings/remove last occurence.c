#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char charac;
    scanf("%c",&charac);
    int len = strlen(str);
    int lastindex = -1;
    int i;
    for(i=0;i<len;i++){
        if(str[i] == charac){
           lastindex = i;
        }
       
    }
  if(lastindex != -1){
      for(int j = lastindex;j< len - 1;j++){
          str[j] = str[j + 1]; 
      }
      str[len - 1] = '\0';
      
  }
  
  
  printf("%s",str);
  
    
}