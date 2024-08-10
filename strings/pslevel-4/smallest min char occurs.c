#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
     char str[100];
     fgets(str,sizeof(str),stdin);
     str[strcspn(str,"\n")] =0;
     int len =strlen(str);
     int freq[256] ={0};
     for(int i=0;i<len;i++){
         str[i] = tolower(str[i]);
     }
     for(int i=0;i<len;i++){
         freq[(int)str[i]]++;
     }
     int min = 10000;
     char minchar ='\0';
     for(int i=0;i<256;i++){
         if( freq[i] > 1 && freq[i] < min){
             min = freq[i];
             minchar = (char)i;
         }
     }
    
     printf("%c is smallest least occurs : %d",minchar,min);
}