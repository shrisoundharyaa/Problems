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
        if(str[i] >=0 && str[i]<=9){
           str[i] = 'n';
        }
        else if(str[i]=='a'){
            str[i]='b';
        }
        else if(str[i]=='t'){
            str[i]='g';
        }
        else{
            continue;
        }
    }
    printf("%s",str);
}

// Replace specific char with another char and numbers with 'n' .
// 'a' -> 'b'
// ,
// 't' -> 'g'
// , number -> 'n' Input: "Education4all"
// , Output :
// "Educbgionnbll"
