#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int sort(char *str,int l){
    for(int i=0;i<l;i++){
        for(int j = i+ 1;j<l;j++){
            if(str[i]>str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int isanagram(char *str1,char *str2){
    int len1=strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2){
        return 0;
    }
    for(int i=0;i<len1;i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    sort(str1,len1);
    sort(str2,len2);
    
    return strcmp(str1,str2) ==0;
}

int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = 0;
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = 0;
    
    if(isanagram(str1,str2)){
        printf("it is a anagram");
    }
    else{
        printf("it is not a anagram");
    }
}