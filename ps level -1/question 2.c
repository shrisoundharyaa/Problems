#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Using logarithms to count digits
    int digits = (int)log10(num) + 1;
    
    printf("Number of digits: %d\n", digits);
    
    return 0;
}
// count number of digits without using while loop
// for negative value
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<0){
        num *= -1;
    }
    int temp = abs(num);
    int digit = (int)log10(temp) + 1;
    printf("%d",digit);
    
}