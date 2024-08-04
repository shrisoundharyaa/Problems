#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char word[100];
    
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]=0;
    
    int l=0;
    int r= strlen(word) - 1;
    int ispalindrome=1;
    while(l<r){
        if(word[l++] != word[r--]){
            ispalindrome=0;
            break;
        }
    }
    
    if(ispalindrome==0){
        printf("it is not a palindrome");
    }
    else{
        printf("it is  a palindrome");
    }
}