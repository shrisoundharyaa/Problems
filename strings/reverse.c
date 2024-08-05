#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[100];
    
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    
    int l = strlen(str);
    // for(int i=0;i<l/2;i++){
    //     int temp;
    //     temp=str[i];
    //     str[i] = str[l- 1 - i];
    //     str[l - 1 - i] = temp;
    // }
    
    for(int i=0,j=l- 1;i<j;i++,j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("%s",str);
}