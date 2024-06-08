#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
   const char *sym[]= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
 for(int i=0;i<13;i++){
     while(a>=arr[i]){
         printf("%s",sym[i]);
         a-=arr[i];
     }
 }
}