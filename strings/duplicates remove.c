#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]= {0};
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] =0;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] != ' '){
            freq[(int)str[i]]++;
        }
    }
    for(int i =0;i<len;i++){
        if(str[i] ==' '){
            printf(" ");
        }
        else if(freq[(int)str[i]] > 0){
            
            printf("%c",str[i]);
            freq[(int)str[i]] = 0;
            
        }
        
    }
    
}