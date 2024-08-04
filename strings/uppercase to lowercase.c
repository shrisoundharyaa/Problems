#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    int r=strlen(str);
    for(int i=0;i<r;i++){
        if(str[i]>='A'&& str[i]<='Z'){
        str[i]= str[i] + 32;
    }
    }
    printf("%s",str);
    
}
//optimized usin pointer
/** 
 * C program to convert string to uppercase using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    while(*s) 
    {
        *s = (*s >='A' && *s <= 'Z') ? *s + 32 : *s;
        s++;
    }

    printf("Uppercase string : %s",str);
    return 0;
}