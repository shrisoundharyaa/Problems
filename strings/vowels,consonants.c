#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    
   int len=strlen(str);
   int vowels,consonants=0;
   
   for(int i=0;i<len;i++){
       if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z'){
           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
              str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                  vowels++;
              }
              else{
                  consonants++;
              }
       }
   }
   printf("%d\n",vowels);
   printf("%d",consonants);
}