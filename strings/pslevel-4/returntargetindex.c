#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    char tar;
    scanf("%c",&tar);
    int len = strlen(str);
    int n=0;
    int found =0;
    int count[100];
    for(int i=0;i<len;i++){
        if(str[i] == tar){
            count[n++] = i;
            found = 1;
        }
    }
    if(found == 1){
        printf("%c occurs at index",tar);
        for(int i=0;i<n;i++){
            printf(" %d",count[i]);
        }
    }
    else{
        printf("%c occurs at  none index ",tar);
    }
}