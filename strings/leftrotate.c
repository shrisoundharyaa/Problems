#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int n = strlen(str);
    int k;
    scanf("%d",&k);
    char rotate[100];
    int j=0;
    for(int i=0;i<n;i++){
        rotate[j++] = str[(i + k)%n];
    }
    printf("%s",rotate);
}