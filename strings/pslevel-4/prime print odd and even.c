#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int oddeven(int len){
    if(len %2 ==0){
        printf("it is even");
    }
    else{
        printf("it is odd");
    }
}
int isprime(int len){
    if(len<=1){
        return 0;
    }
    for(int i=2;i*i<=len;i++){
        if(len%i==0){
           return 0;
        }
    }
    return 1;
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    if(len ==0 || len ==1){
        printf("neither prime or composite\n");
        oddeven(len);
    }
    else if(isprime(len)){
        printf("it is a prime\n");
        oddeven(len);
    }
    else{
        printf("it is not a prime\n");
        oddeven(len);
    }
 

}