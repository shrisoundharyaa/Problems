#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cpy(char *str1,char *str2){
    int i;
    for(i=0;str1[i] != '\0';i++){
        str2[i]=str1[i];
        
    }
    str1[i]='\0';
 
}

int main(){
    char str1[100];
    char str2[100];
    
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;
    //strcpy(str1,str2);
    cpy(str1,str2);
    printf("%s",str2);
}
//optimized method
/**
 * C program to copy one string to another string using pointer
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];
    char * str1 = text1;
    char * str2 = text2; 
    
    /* Input string from user */
    printf("Enter any string: ");
    gets(text1);
    
    /* Copy text1 to text2 character by character */
    while(*(str2++) = *(str1++));

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}