#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int n=strlen(str);
    int found =0;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            printf("%c",str[i]);
            found = 1;
            }
      else{
          if(found){
                printf("\n");
                found =0;
            }
      }
    }
   
}