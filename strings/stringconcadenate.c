#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    
    // Read the first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;
    
    // Read the second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Add a space at the end of str1
    str1[len1] = ' ';
    len1++; // Increase the length of str1 to account for the space

    // Concatenate str2 to str1
    for(int i = 0; i <= len2; i++){
        str1[len1 + i] = str2[i];
    }
    str[len +len2] = '\0';
    
    // Print the concatenated string
    printf("%s", str1);
    
    return 0;
}
//using while
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;
    
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    str1[len1] =' ';
    len1++;
   
    int i=0;
    while(i<=len2){
        str1[len1 + i] = str2[i];
        i++;
    }
    printf("%s",str1);
   //other way using a while
   #include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;
    
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    str1[len1] =' ';
    len1++;
    int i=0;
    while(str1[len1++]=str2[i++]);
    printf("%s",str1);
    
}
//optimized
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100];
    char str2[100];
    
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;
    
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    str1[len1] =' ';
    len1++;
    char *ptr1=str1 + len1;
    char *ptr2=str2;
   
    
    while(*(ptr1++) = *(ptr2++));
        
        
    
    printf("%s",str1);
    
}
//predefined function
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100];
    char str2[100];
    
    // Read the first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove the newline character
    
    // Read the second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove the newline character
    
    // Add a space at the end of str1
    strcat(str1, " ");
    
    // Concatenate str2 to str1
    strcat(str1, str2);
    
    // Print the concatenated string
    printf("%s", str1);
    
    return 0;
}
