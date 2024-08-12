#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    int sum =0;
    for(int i=0;i<len;i++){
        if(isdigit(str[i])){
            sum += str[i] - '0';
        }
    }
    int rev =0;
    int rem=0;
    while(sum >0){
        rem = sum % 10;
        rev = rev*10 + rem;
        sum/=10;
    }
    printf("%d",rev);
    
}