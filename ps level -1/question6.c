#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num1 = n + 1;
    int num = num1 + 2;
    for(int i=num1;i<=num;i++){
       int cube = i*i*i;
       printf("%d ",cube); 
    }
}
// Input a number and Print the cube number of the next three consecutive numbers