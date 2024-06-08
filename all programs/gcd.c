#include<stdio.h>

int findgcd(int a,int b){
    if(a==0){
        return b;
    }
    findgcd(b%a,a);
}

int main(){
    int  a , b;
    scanf("%d %d",&a,&b);
   int gcd = findgcd(a,b);
    printf("%d",gcd);
}
// gcd(a,b) = (b%a,a),if a>0
// for example:
     // gcd(12,18) = (18%12,12)
  //                =(6,12)
  //                =(12%6,6)
  //                =(0,6) if a==0;
  //                return b = 6; gcd = 6