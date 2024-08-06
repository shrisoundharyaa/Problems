#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    int freq[256] ={0};
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] != ' '){
            freq[(int)str[i]]++;
        }
    }
    
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c occurs %d times\n",i,freq[i]);
        }
    }
}
