#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\0")] = 0;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] ==' '){
            printf("%s","%20");
        }
        else{
            printf("%c",str[i]);
        }
    }
}
//Replace space in a string with character("%20"). Input : world is
// big#Output:world%20is%20big