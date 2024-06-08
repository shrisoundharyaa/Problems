
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    float degree[100];
    float radi[100];
    float cosval[100];
    for(int i=0;i<n;i++){
        scanf("%f",&degree[i]);
        radi[i] = degree[i] *(M_PI/180.0);
        cosval[i] = cos(radi[i]);
    }
    for(int i=0;i<n;i++){
        printf("cos %.2f radian = %.2f\n",radi[i],cosval[i]);
    }
    
}