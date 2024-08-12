#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int isPalindrome(char s[], int i, int j){
    while (i <= j)
    {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    
    return 1;
}

int main(){
    char s[MAX_SIZE];
    scanf("%s", s);
    int n = strlen(s);
    int maxlen = 0;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isPalindrome(s, i, j) && j - i + 1 > maxlen)
            {
                maxlen = j -i -1;
                start = i;
                end = j;
            }
        } 
    }
    for (int i = start ; i <= end; i++)
    {
        printf("%c", s[i]);
    }
    
}