#include<stdio.h>
int main(){
 int n;
 int flag =0;
 scanf("%d",&n);
 for(int i=2;i<n;i++)
 {   
     if(n%i==0)
     {
      flag++;
     }
 }
 if(flag==0){
    printf("prime");
 }
else {
printf("Not a prime");
}
}
 
