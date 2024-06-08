#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d\n",&n);
    float sum =0,a,r;
    scanf("%f %f",&a,&r);
    if(n>0){
   for(int j=0;j<n;j++){
        sum = sum + a * pow(r,j);
    }
    printf("%.2f",sum);
    }
    else{
        printf("invalid number");
    }
    
    
}