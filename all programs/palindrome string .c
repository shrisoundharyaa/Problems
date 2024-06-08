#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s",str);
    int ispalindrome = 1;
    int l =0;
    int r = strlen(str) - 1;
    while(l<r){
        if(str[l++] !=str[r--]){
            ispalindrome =0;
            break;
            
        }
    }
    if(ispalindrome == 0){
        printf("not a palindrome");
    }
    else{
        printf("palindrome");
    }
}