#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&str[i][j]);
        }
    }
    //swap
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = str[i][j];
            str[i][j] = str[j][i];
            str[j][i] = temp;
             
        }
    }
    //reverse
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp = str[i][j];
            str[i][j] = str[i][n - 1 - j];
            str[i][n - 1 - j] = temp;
        }
    }
    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c ",str[i][j]);
        }
        printf("\n");
    }
    
}
//#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    char str[num][num];
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            scanf(" %c",&str[i][j]);
        }
    }
    for(int i=0; i<num; i++)
    {
        for(int j=num-1; j>=0; j--)
        {
            printf("%c ",str[j][i]);
        }
        printf("\n");
    }
   
    return 0;
}
