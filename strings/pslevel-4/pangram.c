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
        str[i] = tolower(str[i]);
    }
    int freq[26]={0};
    for(int i=0;i<len;i++){
        freq[str[i] -'a']++;
    }
    int found =0;
    for(int i=0;i<26;i++){
        if(freq[i] ==0){
            printf("it is not a pangram");
             return 0;
        }
    }
   
               printf("it pangram");
    
}