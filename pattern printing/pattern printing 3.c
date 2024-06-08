#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int i = rows; i>= 0; i--)
    {
        for (int j =0; j<= i; j++){
            printf("%d", j + 1);
        }
        printf("\n");
    }
}

// ***    123
// **     12
// *      1