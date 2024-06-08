#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int mul = a>b ? a : b;
    int step = mul;
    while(1){
        if(mul%a==0 && mul%b==0){
            printf("%d",mul);
            break;
        }
        else{
            mul = mul + step;
        }
    }
    
}
//efficient method
#include<stdio.h>

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    gcd(b%a,a);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int lcm =  a*b/gcd(a,b);
    printf("%d",lcm);
}

// a*b = lcm(a,b) * gcd(a,b)
// lcm(a,b) = a*b/gcd(a,b)