#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
     char str[100];
     fgets(str,sizeof(str),stdin);
     str[strcspn(str,"\n")] = 0;
     int len = strlen(str);
     char *tok = strtok(str," ");
     int sum =0;
   
    while(tok != NULL){
        if(isdigit(tok[0])){
            sum += atoi(tok);
        }
        tok = strtok(NULL," ");
    }
     printf("%d",sum);
}
//output : sdf 20 snd 30
//50
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    
    int n = strlen(s), sum = 0;
    
    for(int i = 0; i < n; i++) {
        if(isdigit(s[i])) {
            sum += s[i] - '0';
        }
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
//output: sum of 30 and 40
//7