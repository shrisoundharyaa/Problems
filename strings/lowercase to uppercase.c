#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    int r=strlen(str);
    for(int i=0;i<r;i++){
        if(str[i]>='a'&& str[i]<='z'){
        str[i]= str[i] - 32;
    }
    }
    printf("%s",str);
    
}
//optimized 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
     char str1[100];
     
     
     fgets(str1,sizeof(str1),stdin);
     str1[strcspn(str1,"\n")]=0;
     
     int r = strlen(str1);
     char *ptr = str1;
     while(*ptr){
         *ptr = (*ptr >='a'&& *ptr <= 'z')? *ptr - 32 : *ptr;
        //  *ptr++;
         ptr++;
         //s++ advances the pointer so that the loop can process the next character.
// *s++ combines the steps of accessing the current character and then moving the pointer to the next one, which is a common and compact way to write such loops in C.
     }
   
    printf("%s",str1);
}

