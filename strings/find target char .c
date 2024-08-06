#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char target;
    scanf("%c",&target);
    int index = -1;
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i] == target ){
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("%c is not found in string",target);
    }
    else{
        printf("%d",index);
    }
}
//Input

// Input string: I love Codeforwin.
// Input character to search: o
// Output

// 'o' is found at index 3